#include"header.h"

void parsing(char *file)
{
  int lpi,lpj,movie_id,uid,rid,count;		
  for(lpi=1;lpi<=MAX_USER;lpi++)
  {
    user[lpi].mcount = 0;
  }
  FILE *fp;
  char * line = NULL;
  size_t len = 0;
  ssize_t read;
  fp = fopen(file, "r");
  if(fp == NULL) 
  {
    printf("File does not exist!");
  } 
  else 
  {
    char buf[1024];
    while (fgets(buf, 1024, fp) != NULL) 
    {
      int prasent_uid=0;
      char *tok = strtok(buf, "\t");
     while (tok != NULL) 
     {
       if(count==0)
       {
         uid=atoi(tok);
         prasent_uid = uid;
         user[prasent_uid].user_id = uid;
       }
       if(count==1)
       {
         movie_id=atoi(tok);
         user[prasent_uid].watchmovie[ user[prasent_uid].mcount ] = movie_id;
       }
       if(count==2)
       {
         rid=atoi(tok);
         user[prasent_uid].rating[ user[prasent_uid].mcount ] = rid;
         user[prasent_uid].mcount++;
       }
       count++;
       tok = strtok(NULL,"\t");   
     } 
   }
  }
  fclose(fp);
}
