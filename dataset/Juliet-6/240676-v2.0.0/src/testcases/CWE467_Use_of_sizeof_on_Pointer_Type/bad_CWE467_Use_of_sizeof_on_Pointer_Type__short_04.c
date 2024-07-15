static const int STATIC_CONST_TRUE = 1; 
static const int STATIC_CONST_FALSE = 0; 
void FUN0()
{
    if(STATIC_CONST_TRUE)
    {
        {
            short * VAR0 = NULL;
<START>
            VAR0 = (short *)malloc(sizeof(VAR0));
<END>
            if (VAR0 == NULL) {exit(-1);}
            *VAR0 = 5;
            printShortLine(*VAR0);
            free(VAR0);
        }
    }
}
