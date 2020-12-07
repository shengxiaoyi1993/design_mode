#include<iostream>
#include "export.h"

#define SECONDS_PER_YEAR  60*60*24*365UL

 int main() {
   pFactory fact;
   Ptree ptree_tmp;
   Ctree ctree_tmp;

   fact.createMaze(ptree_tmp);
   fact.createMaze(ctree_tmp);



  return 0;
}
