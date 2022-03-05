#include <iostream>

using std::cout;
using std::ostream;
class Vec2{
  friend ostream& operator<<(ostream &out, Vec2 v);
  friend Vec2 operator+(float valor, Vec2 v);
  friend Vec2 operator+(Vec2 opEsq, Vec2 opDir); 
  
  private:
    float x;
    float y;
  public:
    Vec2(float cx, float cy){
      this->x = cx;
      this->y = cy;
    }

    void setX(float cx){ this->x = cx; }
    void setY(float cy){ this->y = cy; }
    float getX(){ return this->x; }
    float getY(){ return this->y; }
    
    //sobrecarga do operador +=
     Vec2& operator+=(Vec2 outro){
       this->x += outro.x;
       this->y += outro.y; 
       return *this;
    }


    //sobrecarga para soma com uma constante
    Vec2 operator+(float valor){
      Vec2 aux(this->x + valor, this->y + valor);
      return aux;
    }

    // sobrecarga do operador +
    //Vec2 operator+(Vec2 outro){
    //  Vec2 aux(this->x + outro.x, this->y + outro.y);
    //  return aux;
    //}

    //funcao para somar dois vetores
    Vec2 soma(Vec2 outro){
       Vec2 aux(this->x + outro.x, this->y + outro.y);
       return aux;
    } 
};

//sobrecarrega operador de extracao de stream
ostream& operator<<(ostream &out, Vec2 v){
  out <<"["<<v.x<<", "<<v.y<<"]";
  return out;
}

//sobrecarga com funcao global
Vec2 operator+(Vec2 opEsq, Vec2 opDir){
    Vec2 aux(opEsq.x + opDir.x, opEsq.y + opDir.y);
    return aux;
}

//sobrecarga para somar um inteiro com um vetor
Vec2 operator+(float valor, Vec2 v){ 
  Vec2 aux(v.x + valor, v.y + valor);
  return aux;
}

int main()
{
  Vec2 v1(3.5, 2.3);
  Vec2 v2(4.0, 1.0);

  Vec2 v3 = v1 + v2;
  Vec2 v4 = v2 + 3.0;
  Vec2 v5 = 2.0 + v1;
  v2 += v1 += v3;

  cout<<"\n"<<v1<<" "<<v2;
  cout<<"\nv3.x = "<<v3.getX()<<" v3.y = "<<v3.getY();
  cout<<"\nv4.x = "<<v4.getX()<<" v4.y = "<<v4.getY();
  cout<<"\nv5.x = "<<v5.getX()<<" v5.y = "<<v5.getY();
  cout<<"\nv2.x = "<<v2.getX()<<" v2.y = "<<v2.getY();
  return 0;
}
