#include <stdio.h>
/* oldcat: Concatenate files */
int main(int argc, char *argv[])
{
   void filecopy(FILE *, FILE *); /* prototype for function */
   int fd = open(*fp, O_RDONLy,0)
   char *prog = argv[0]; /* program name for errors */
   if (argc == 1) /* no args; copy standard input */
      filecopy(0, 1);
  else 
      while (--argc > 0)
         if (fd == -1) {
            fprintf(stderr, "%s: can't open %s\n", prog, *argv);
            return(-1);
         } else {
            filecopy(fp, 1);
            fclose(fp);
     }
  return(0);
}
/* filecopy: copy file ifp to ofp */
void filecopy(FILE *ifp, FILE *ofp)
{
   int c;
   while ((c = getc(ifp)) != EOF)
      putc(c, ofp);
}
Is this the write idea? It still won't compile:

#include <stdio.h>
/* oldcat: Concatenate files */
int main(int argc, char *argv[])
{
   void filecopy(int ifp, int ifo); 

   int fd = open(*File,O_RDONLY,0);  //is this correct?
   char *prog = argv[0]; 
   if (argc == 1) /* no args; copy standard input */
      filecopy(0, 1); //is this correct?
  else 
      while (--argc > 0)
         if ((fd == -1)  //is this correct?{
            fprintf(stderr, "%s: can't open %s\n", prog, *argv); 
            return(-1);
         } else {
            filecopy(*FILE, 1);//is this correct?
            close(*FILE);//is this correct?
     }
  return(0);
}
/* filecopy: copy file ifp to ofp */
void filecopy(FILE *ifp, FILE *ofp)//NO CLUE HOW THIS SHOULD BE
{
   int c;
   while (c = read(fd ,&something,1)//What is &ch/&something?
      putc(c, ofp);
}

