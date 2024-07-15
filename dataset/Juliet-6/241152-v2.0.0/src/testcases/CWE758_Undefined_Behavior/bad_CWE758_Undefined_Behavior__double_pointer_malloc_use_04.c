static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
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
