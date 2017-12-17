#ifndef TEXTHANDLER_H_INCLUDED
#define TEXTHANDLER_H_INCLUDED

class TextHandler
{
  public:
    TextHandler();

    string toString(int n);
    void putLife(int n);
    void putScore(int n);
};

TextHandler::TextHandler()
{
  ///Default Empty..
}

void TextHandler::putLife(int n)
{
  string life="LIFE: " + toString(n)+"%";
  glPushMatrix();
    glColor3f(1, 0.270, 0);
    glRasterPos3f( -5.0,2.7,-7.0);
    for(int i=0; i < life.length(); i++){
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, life[i]);
    }
  glPopMatrix();
}

void TextHandler::putScore(int n)
{
  string life="SCORE: " + toString(n);
  glPushMatrix();
    glColor3f(1, 0.270, 0);
    glRasterPos3f( -0.3,2.7,-7.0);
    for(int i=0; i < life.length(); i++){
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, life[i]);
    }
  glPopMatrix();
}

string TextHandler::toString(int n)
{
  if(n==0) return "0";
  string str="",res="";
  while(n) {str+=(n%10)+'0'; n/=10;}
  for(int i=str.length()-1;i>=0;i--) res+=str[i];
  return res;
}
#endif // TEXTHANDLER_H_INCLUDED
