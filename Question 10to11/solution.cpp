class bar3d
{
    public:
       float width;
       float height;
       float depth;
       bool checker(float a){
            if (a > 0.0 && a < 1000.0){
                return true;
            } else {
                return false;
            }
       }
       bar3d(){
            width = 0;
            height = 0;
            depth = 0;
       }
       bar3d(float w, float h, float d) {
            if (checker(w) && checker(h) && checker(d)){
                width = w;
                height = h;
                depth = d;  
            } else {
                width = 0;
                height = 0;
                depth = 0;
            }
       } 
       float getVolume() {
           float volume = width * height * depth;
           return volume;
       }
       void scale(float scaler){
            width *= scaler;
            height *= scaler;
            depth *= scaler;
       }
       float addVolume (bar3d other){
           return (getVolume() + other.getVolume());
       }
};