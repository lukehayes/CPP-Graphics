#ifndef __CG_IO_H__
#define __CG_IO_H__

#include <stdio.h>
#include "common/types.h"

u8
CG_Get_Filesize(FILE* handle)
{
    // Move the file pointer to the end of the file to
    // work out the file size.
    fseek(handle, 0, SEEK_END);
    int size = ftell(handle);
    fseek(handle, 0, SEEK_SET);
    return size;
}

/**
 * Read a file into a buffer and return it. 
 * Buffer needs to be freed after use!
 */
str
CG_Read_File(const char* filename)
{
    FILE* fh = fopen(filename, "r");
    int size = CG_Get_Filesize(fh);

    char* buffer = malloc(sizeof(char) * size);

    for(int i = 0; i<= size + 1; i++) {
        buffer[i] = fgetc(fh);
    }

    fclose(fh);

    return buffer;
}




#endif
