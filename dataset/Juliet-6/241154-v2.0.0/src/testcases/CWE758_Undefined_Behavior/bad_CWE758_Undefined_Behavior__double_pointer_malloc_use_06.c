static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    if(STATIC_CONST_FIVE==5)
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
