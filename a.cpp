#include<vector>
#include<algorithm>
#include<iostream>
struct ColorVec{
    int blue;
    int green;
    int red;
};

bool colorCmp(const ColorVec& a,const ColorVec& b){
    return a.red<<8+a.green<<4+a.blue <b.red<<8+b.green<<4+b.blue;
}
int main(){
    ColorVec b,a;
    a.blue = 1;
    a.green = 1;
    a.red = 1;
    b.blue = 1;
    b.green = 1;
    b.red = 2;
    std::vector<ColorVec> v_color;
    v_color.push_back(a);
    v_color.push_back(b);
    std::sort(v_color.begin(),v_color.end(),colorCmp);
    for(std::vector<ColorVec>::iterator it=v_color.begin();it!=v_color.end();++it){
        std::cout<<it->red<<std::endl;
    }
    
}

