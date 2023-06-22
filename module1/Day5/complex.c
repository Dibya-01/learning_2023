#include <stdio.h>

struct complex
{
    float real;
    float imaginary;
};

void read(struct complex* c)
{
    printf("Enter the real part:");
    scanf("%f", &(c->real));
    printf("Enter the imaginary part:");
    scanf("%f", &(c->imaginary));
}

void writeComplex(struct complex c)
{
    printf("complex number:%f +%fi\n",c.real,c.imaginary);
}

struct complex addComplex(struct complex c1,struct complex c2)
{
    struct complex res;
    res.real = c1.real +c2.real;
    res.imaginary = c1.imaginary+c2.imaginary;
    return res;
}

struct complex multiplyComplex(struct complex c1,struct complex c2)
{
    struct complex res;
    res.real = (c1.real*c2.real) - (c1.imaginary*c2.imaginary);
    res.imaginary = (c1.real*c2.imaginary)+(c1.imaginary*c2.real);
    return res;
}

int main()
{
    struct complex complex1,complex2,sum,product;

    printf("Enter the first complex number:\n");
    read(&complex1);
    printf("Enter the second complex number:\n");
    read(&complex2);
    
    printf("\nFirst complex number:\n");
    writeComplex(complex1);
    printf("Second complex number:\n");
    writeComplex(complex2);

    sum = addComplex(complex1, complex2);
    printf("\nSum of the two complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(complex1, complex2);
    printf("Product of the two complex numbers:\n");
    writeComplex(product);

    return 0;
}