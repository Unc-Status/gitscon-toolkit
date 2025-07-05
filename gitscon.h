#ifndef GITSCON_H
#define GITSCON_H

//gitscon.h
//gitscon.h copyright ( c ) UncStatus++

#define GITSCON_VERSION "1.0"

void cd(const char * directory);
void mkdir(const char * directory){ directory = new const char; };

const char* GITSCON_NAME = "Git Scon 1.0...\n";

#define gscon_mkdir ( mkdir("%c") )
#define gscon_cd ( cd("%c") )

//
//
//*!GITSCON GTK SUPPORT SECTION!*
//
//

inline bool gitscon_prj_chck_gtk_included(const char* prjfcode){
      if( prjfcode = "#include <gtk/gtk.h>" ){
          printf
      }
}



#endif
