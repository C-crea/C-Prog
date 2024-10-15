#include <iostream>

//Fonction pour calculer la fractale de Mandelbrot
int mandelbrot(double x, double y, int max_iter){
    double zx=0, zy=0;
    int iter=0;
    while (iter< max_iter &&(zx * zx + zx * zy)<4){
        double temp= zx * zx - zy * zy + x;
        zy = 2 * zx * zy + y;
        zx = temp;
        iter++;
    }
    return iter;
}
int main(){
    int l = 80;
    int h = 40;
    int max_iter = 100;
    //Affichage de la fractale
    for (int y = 0; y < h; y++) {
        for (int x = 0; x < l; x++) {
            double rx=(x-l/2.0) * 3.5/l;
            double ry=(y-h/2.0) * 2.0 /h;
            int iter= mandelbrot(rx, ry, max_iter);
            if (iter == max_iter){
                std::cout<<"*";
            }
            else
            {
                std::cout<<" ";
            }
        }
        std::cout<<std::endl;
    }
    return 0;
}