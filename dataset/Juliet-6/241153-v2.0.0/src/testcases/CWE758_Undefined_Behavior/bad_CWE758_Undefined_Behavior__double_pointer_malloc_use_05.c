static int staticTrue = 1; 
static int staticFalse = 0; 
void FUN0()
{
    if(staticTrue)
    {
        {
            double * * pointer = (double * *)malloc(sizeof(double *));
            if (pointer == NULL) {exit(-1);}
<START>
            double * data = *pointer; 
<END>
            free(pointer);
            printDoubleLine(*data);
        }
    }
}
