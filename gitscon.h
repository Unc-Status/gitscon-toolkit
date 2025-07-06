#ifndef GITSCON_H
#define GITSCON_H

//gitscon.h
//gitscon.h copyright ( c ) UncStatus++
//gitscon-toolkit july 2025

#define GITSCON_VERSION "1.0"

//will move eventually...
void sconload(void *dat);

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

//check if the project has <gtk/gtk.h> included
inline bool gitscon_prj_chck_gtk_included(const char* prjfcode){
      if( prjfcode = "#include <gtk/gtk.h>" ){
          printf("%c" + "//", "%c", GITSCON_NAME + "/t", GITSCON_VERSION);
          sconload(GITSCON_NAME);
          sconload(GITSCON_VERSION);
         return true;
      }
      else {
        return false;
      }
  //out();
}



#endif
