static const int STATIC_CONST_FIVE = 5;
void FUN0()
{
    double * data;
    data = (double *)malloc(10*sizeof(double));
    if (data == NULL) {exit(-1);}
    if(STATIC_CONST_FIVE==5)
    {
        ; 
    }
    if(STATIC_CONST_FIVE==5)
    {
        {
            int i;
            for(i=0; i<10; i++)
            {
<START>
                printDoubleLine(data[i]);
<END>
            }
        }
    }
}
