#include "project.h"

int main()
{
    printf("Hello world!\n");

    MultibandImage *m;
    MultibandImage *readed;
    MultibandImage *pooled;
    MultibandImage *normalized;

    MultibandImage *correlated;
    MultibandKernel *k;

    /*m = CreateMultibandImage(2000, 1000, 50);
    WriteMultibandImage(m, "/home/palefo/fonstest.ppm");
    readed = ReadMultibandImage("/home/palefo/fonstest.ppm");
    WriteMultibandImage(readed, "/home/palefo/fonstest_readed.ppm");
    pooled = pooling(m, 2, 3.0, 2.0);
    normalized = normalize(m, Circular(3.0));
    DestroyMultibandImage(&readed);
    k =  CreateMultibandRndKernel(10, 20, 60);
    correlated =  MultibandCorrelation(m,k, ACTIVATION_NONE);
    WriteMultibandImage(correlated, "/home/palefo/fonstest_correlated.ppm");
    DestroyMultibandImage(&m);
    DestroyMultibandKernel(&k);
    DestroyMultibandImage(&pooled);
    DestroyMultibandImage(&normalized);
    DestroyMultibandImage(&correlated);*/

    m = CreateMultibandImage(30,30,2);
    WriteMultibandImage(m, "test.dlimg");
    DestroyMultibandImage(&m);
    return 0;
}
