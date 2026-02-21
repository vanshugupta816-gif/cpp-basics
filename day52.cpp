// ****ABSTRACT CLASS ---> have one pure class******
#include<iostream>
#include<cstring>
using namespace std;

class CWH{
      protected:
     string title;
      float rating;
    public:
    CWH(string s, float r){
            title =  s;
            rating = r;
        }
        virtual void display()=0; // do nothing function ---> pure virtual function
};

class CWHVideo: public CWH
{
    float videolength;
    public:
    CWHVideo(string s, float r, float vl): CWH (s,r){
        videolength = vl;
    }
    void display(){
        cout<<"this is a amazing video with title"<<title<<endl;
        cout<<"rating:"<<rating<<"out of 5 stars"<<endl;
        cout<<"length of this video is"<<videolength<<"minutes"<<endl;
    }
};

class CWHtext: public CWH
{
    int words;
    public:
    CWHtext(string s, float r, int wc): CWH(s,r){
       words = wc;
    }
      void display(){
         cout<<"this is a amazing text tutorial with title"<<title<<endl;
         cout<<"rating of this text tutorial:"<<rating<<"out of 5 stars"<<endl;
        cout<<"number of words in this text tutorial is"<<words<<"in words"<<endl;
    }
};
int main(){
    string title ;
    float rating, vlen;
    int words;

    // for code with harry video
    title = "django tutorial";
    vlen = 6.05;
    rating = 6.65;
    CWHVideo djvideo(title , rating , vlen);
    // djvideo.display();

   // for code with harry text
    title = "django tutorial text";
    vlen = 6.05;
    rating = 6.65;
    CWHtext djtext(title , rating , vlen);
    //  djtext.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djtext;

    tuts[0]->display();
    tuts[1]->display();
    
    return 0;
}

// RULES FOR VIRTUAL FUNCTION
// 1. they cannot be static
// 2. they are accesed by object pointers.
// 3. virtual function can be a friend of another class.
// 4. a virtual function in base class might not be used.
// 5. if a virtual function is defined in a base class , there is no necessity of redefining it in the derived class

