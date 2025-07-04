#ifndef GITSCON_H
#define GITSCON_H

//gitscon.h

void cd(const char * directory);
void mkdir(const char * directory){ directory = new const char; };

#define GITSCON_VERSION "1.0"

#define gscon_mkdir (mkdir("%c"))
#define gscon_cd ("%c") 

#endif
