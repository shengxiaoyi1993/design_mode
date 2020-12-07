#include <vector>
#include <iostream>


using namespace std;

 class Ptree{
 public:

  virtual void print(){
    cout<<"this is ptree!"<<endl;
  }
};

class Ctree:public  Ptree
{
public:

  virtual void print(){
    cout<<"this is ctree!"<<endl;
  }
};


class pFactory{
public:

  virtual void createMaze(Ptree &v_tree){
    v_tree.print();
  }
};
