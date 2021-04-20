class bar3d
{
  public:
    int width;
    int height;
    int depth;

    bool rangeTester(int attrib){
      if (attrib > 0 && attrib < 1000){
        return true;
      } else {
        return false;
      }
    }
    
    bar3d(int w, int h, int d) {
      if (rangeTester(w) && rangeTester(h) && rangeTester(d)) {
        width = w;
        height = h;
        depth = d;
      } else {
        width = 0;
        height = 0;
        depth = 0;
      }
    }
};
