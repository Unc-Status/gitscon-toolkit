#ifndef GITSCON_H
#define GITSCON_H

//gitscon.h
//gitscon.h copyright ( c ) UncStatus++
//gitscon-toolkit july 2025
//praise be to the lord for my insparation and code

//main stuff...
int out(){ return 0; };
//end main stuff...

//decl
#define __decl_void NULL

#define GITSCON_VERSION "1.0"

//will move eventually...
void sconload(void *dat);

void cd(const char * directory);
void mkdir(const char * directory){ directory = new const char; };

//git scon info
const char* GITSCON_NAME = "Git Scon 1.0...\n";

#define gscon_mkdir ( mkdir("%c") )
#define gscon_cd ( cd("%c") )

//
//
//*!GITSCON GTK SUPPORT SECTION!*
//
//

#define decl_gtk "Gtk"
#define decl_gtkplusplus "Gtk+"

//gtk versions list
#define GTK_VERSION_F "1.0"
#define GTK_VERSION_S "2.0"
#define GTK_VERSION_T "3.0"
#define GTK_VERSION_FRR "4.0"

const char* GTK_INCLUDE_FILE_BUFFER = "gtk/gtk.h";
unsigned INC_QUOTE_SYMBOL = ";
//check if the project has <gtk/gtk.h> included
inline bool gitscon_prj_chck_gtk_included(const char* prjfcode()const){
      if( prjfcode() = "#include <gtk/gtk.h>" || "#include\t %c, %c, %c\n", INC_QUOTE_SYMBOL, GTK_INCLUDE_FILE_BUFFER, INC_QUOTE_SYMBOL){
           printf("%c" + "//", "%c", GITSCON_NAME + "/t", GITSCON_VERSION);
         return true;
      }
      
      else {
        return false;
      }
      
  //out();
}

//commands tree for git scon console app itself
unsigned char g_sCommandTree[]{
  "--gitscon-mkdir", "--gitscon-cd",
  "--new-file", "--open-file",
  "--chng-fileext", "--run",
  "--exe", "--application",
  "--cab", "--build-prjmake";
}



#endif
