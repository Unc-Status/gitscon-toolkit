#ifndef GITSCON_H
#define GITSCON_H

//gitscon.h
//gitscon.h copyright ( c ) UncStatus++

void cd(const char * directory);
void mkdir(const char * directory){ directory = new const char; };

#define GITSCON_VERSION "1.0"

const char * GITSCON_NAME = "Git Scon 1.0...\n";

#define gscon_mkdir ( mkdir("%c") )
#define gscon_cd ( cd("%c") ) 

#endif
