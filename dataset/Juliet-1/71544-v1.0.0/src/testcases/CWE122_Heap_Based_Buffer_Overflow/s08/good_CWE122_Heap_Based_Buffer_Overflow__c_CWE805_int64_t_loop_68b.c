int64_t * VAR0;
int64_t * VAR1;
void FUN0();
void FUN1()
{
    int64_t * data;
    data = NULL;
    data = (int64_t *)malloc(100*sizeof(int64_t));
    VAR1 = data;
    FUN0();
}
extern int64_t * VAR0;
extern int64_t * VAR1;
void FUN0()
{
    int64_t * data = VAR1;
    {
        int64_t source[100] = {0}; 
        {
            size_t i;
            for (i = 0; i < 100; i++)
            {
                data[i] = source[i];
            }
            printLongLongLine(data[0]);
            free(data);
        }
    }
}
