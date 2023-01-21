#include<iostream>
using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display()=0;  //do-nothing function -> pure virtual function
                           // And class CWH is a abstract base class
};

class CWHVideo: public CWH{
    float videoLength;
    public:
        CWHVideo(string s, float r, float vl): CWH(s,r){
            videoLength= vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of five stars "<<endl;
            cout<<"Length of the video is: "<<videoLength<<" minutes "<<endl;
        }
};

class CWHText: public CWH{
    int words;
    public:
        CWHText(string s, float r, int wc):CWH(s,r){
            words = wc;
        }
    void display(){
        cout<<"This is an amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<<"out of five stars"<<endl;
        cout<<"NO of words in this text tutorial is: "<<words<<" Words "<<endl;
    }
};

int main (){
    string title;
    float rating, vl;
    int words;
    //for code with prabhat video
    title = "Django tutorial";
    vl= 5.7;
    rating = 4.6;
    CWHVideo djvideo(title,rating,vl);
    // djvideo.display();

    // for code with prabhat text
    title = "Django tutorial Text";
    words = 450;
    rating = 4.2;
    CWHText djText(title,rating,words);
    // djText.display();

    CWH* tuts[2];
    tuts[0] = &djvideo;
    tuts[1] = &djText;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}