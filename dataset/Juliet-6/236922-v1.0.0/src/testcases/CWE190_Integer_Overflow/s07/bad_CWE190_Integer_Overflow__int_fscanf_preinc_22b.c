int VAR0 = 0;
void FUN0(int data);
void FUN1()
{
    int data;
    data = 0;
    fscanf(stdin, "%d", &data);
    VAR0 = 1; 
    FUN0(data);
}
extern int VAR0;
void FUN0(int data)
{
    if(VAR0)
    {
        {
<START>
            ++data;
<END>
            int result = data;
            printIntLine(result);
        }
    }
}
