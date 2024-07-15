int VAR0 = 0;
int VAR1 = 0;
void FUN0(twoIntsStruct data);
void FUN1()
{
    twoIntsStruct data;
    ; 
    VAR0 = 0; 
    FUN0(data);
}
void FUN2(twoIntsStruct data);
void FUN3()
{
    twoIntsStruct data;
    ; 
    VAR1 = 1; 
    FUN2(data);
}
extern int VAR0;
extern int VAR1;
void FUN0(twoIntsStruct data)
{
    if(VAR0)
    {
        printLine("Benign, fixed string");
    }
    else
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}
void FUN2(twoIntsStruct data)
{
    if(VAR1)
    {
        data.intOne = 0;
        data.intTwo = 0;
        printStructLine(&data);
    }
}
