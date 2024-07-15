int VAR0;
int VAR1;
void FUN0();
void FUN1()
{
    int data;
    data = -1;
    data = CHAR_MAX-5;
    VAR1 = data;
    FUN0();
}
extern int VAR0;
extern int VAR1;
void FUN0()
{
    int data = VAR1;
    {
        short shortData = (short)data;
        printShortLine(shortData);
    }
}
