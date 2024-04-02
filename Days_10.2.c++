// pure Virtual function
#include <iostream>
#include <cstring>
using namespace std;

//Abstract base class is known where we can't use to make its
// objects and contains atleast 1 pure virtual function.
class CWH{
    protected:
    string title;
    float rating;
    
    public:
     CWH(string s,float r){
         title=s;
         rating=r;
     }
     //Do nothing function --> pure virtual function.
     //it will overrid but will not use in base class.
     virtual void display()=0; 
    //  {
    //      cout<<"Nothing is here\n";
    //  }
};

class CWHvideo: public CWH
{
    float videolength;
    public:
    CWHvideo(string s,float r, float vl):CWH(s,r){
        videolength=vl;
    }
    void display(){
        cout<<"This is amazing video with title :"<<endl;
        cout<<"This is rating video :"<<rating<<"Out of 5 stars"<<endl;
        cout<<"Length of this video :"<<videolength<<"minutes"<<endl;
    }
};

class CWHText: public CWH
{
    int words;
    public:
    CWHText(string s,float r, int wc):CWH(s,r)
    {
        words=wc;
    }
     void display(){
        cout<<"This is amazing video with title :"<<endl;
        cout<<"This is rating video :"<<rating<<"Out of 5 stars"<<endl;
        cout<<"Number of words in this video :"<<words<<"words"<<endl;
    }
};

int main() {
 string title;
 float rating, vlen;
 int words;
 
 title="This is C++ course";
 vlen=4.56;
 rating=4.0;
 CWHvideo obj(title,rating,vlen);
//  obj.display();
 
 title="This is C++ course with dheeraj";
 words=546;
 rating=5.0;
 CWHText obj2(title,rating,words);
//  obj2.display();

CWH*tuts[2];
tuts[0]=&obj;
tuts[1]=&obj2;

tuts[0]->display();
tuts[1]->display();
    return 0;
}
