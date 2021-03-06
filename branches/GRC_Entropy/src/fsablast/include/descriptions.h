#ifndef _descriptions_
#define _descriptions_

// Open text file containing descriptions
void descriptions_open(char* filename);

// Get the description located at the given position in the file
char* descriptions_getDescription(uint4 descriptionLocation, uint4 descriptionLength);

// Close the file
void descriptions_close();

#endif

