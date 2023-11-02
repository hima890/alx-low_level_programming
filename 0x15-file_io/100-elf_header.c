#include <stdio.h>
#include <stdlib.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error_exit - Print an error message to stderr and exit with a specific status code.
 * @status: The status code to exit with.
 * @message: The error message to print.
*/

void error_exit(int status, char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(status);
}

/**
 * display_elf_header - Display information from the ELF header.
 * @header: Pointer to the ELF header structure.
*/

void display_elf_header(Elf64_Ehdr *header)
{
printf("ELF Header:\n");
printf("  Magic:   ");
for (int i = 0; i < EI_NIDENT; i++)
printf("%02x%c", header->e_ident[i], i < EI_NIDENT - 1 ? ' ' : '\n');
printf("  Class:                             %s\n",
header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
printf("  Data:                              %s\n",
header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
printf("  OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == 0 ? "UNIX - System V" :
header->e_ident[EI_OSABI] == 1 ? "UNIX - HP-UX" :
header->e_ident[EI_OSABI] == 2 ? "UNIX - NetBSD" :
header->e_ident[EI_OSABI] == 3 ? "UNIX - Linux" :
header->e_ident[EI_OSABI] == 6 ? "UNIX - Solaris" :
header->e_ident[EI_OSABI] == 7 ? "UNIX - AIX" : "UNIX - Unknown");
printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
printf("  Type:                              %s\n",
header->e_type == ET_NONE ? "NONE (Unknown)" :
header->e_type == ET_REL ? "REL (Relocatable file)" :
header->e_type == ET_EXEC ? "EXEC (Executable file)" :
header->e_type == ET_DYN ? "DYN (Shared object file)" :
header->e_type == ET_CORE ? "CORE (Core file)" :
header->e_type == ET_LOOS ? "LOOS (Operating system-specific)" :
header->e_type == ET_HIOS ? "HIOS (Operating system-specific)" :
header->e_type == ET_LOPROC ? "LOPROC (Processor-specific)" :
header->e_type == ET_HIPROC ? "HIPROC (Processor-specific)" : "UNKNOWN (Unknown)");
printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Display information contained in the ELF header.
 * @ac: The number of arguments.
 * @av: An array of arguments (ac should be 2: program name and ELF filename).
 * Return: 0 on success, or the specific error code on failure.
*/

int main(int ac, char **av)
{
int file;
Elf64_Ehdr header;

if (ac != 2)
error_exit(98, "Usage: elf_header elf_filename");

file = open(av[1], O_RDONLY);
if (file == -1)
error_exit(98, "Error: Can't open file");

if (read(file, &header, sizeof(header)) != sizeof(header) || header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' ||
header.e_ident[2] != 'L' || header.e_ident[3] != 'F')
error_exit(98, "Error: Not an ELF file");

display_elf_header(&header);

if (close(file) == -1)
error_exit(98, "Error: Can't close file");

return (0);
}
