// Virtual function
#include <iostream>
#include <cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    
    public:
     CWH(string s,float r){
         title=s;
         rating=r;
     }
     virtual void display(){}
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
 obj.display();

    return 0;
}
