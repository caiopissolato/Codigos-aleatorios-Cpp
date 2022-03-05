#include <iostream>

using std::cout;

class Vec2{
    friend Vec2 operator+(Vec2 opEsq, Vec2 opDir);
    
    private:
        float x;
        float y;
    public:
        Vec2(float cx, float cy){
            this->x = cx;
            this->y = cy;
        }
    void setX(float cx){this->x = cx;}
    void setY(float cy){this->y = cy;}

    float getX(){return x;}
    float getY(){return y;}    

    //sobrecarga do operador +
   /* Vec2 operator+(Vec2 outro){
        Vec2 aux(this->x + outro.x, this->y + outro.y);
        return aux;    }*/

    //funcao para somar dois vetores
    Vec2 soma(Vec2 outro){
        Vec2 aux(this->x + outro.x, this->y + outro.y);
        return aux;
    }
};

Vec2 operator+(Vec2 opEsq, Vec2 opDir){
    Vec2 aux(opEsq.x + opDir.x, opEsq.y + opDir.y);
    return aux;
}

int main(){
    Vec2 v1(3.5, 2.3);
    Vec2 v2(4.0, 1.0);

    Vec2 v3 = v1.soma(v2);
    cout<<"v3.x = "<<v3.getX()<<" v3.y = "<<v3.getY()<<"\n";

    Vec2 v3a = v1+v2;

    cout<<"v3.x = "<<v3a.getX()<<" v3.y = "<<v3a.getY()<<"\n";
    return 0;
}