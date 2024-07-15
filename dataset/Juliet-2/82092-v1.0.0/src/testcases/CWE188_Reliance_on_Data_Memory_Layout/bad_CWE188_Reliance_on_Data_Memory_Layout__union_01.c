void FUN0()
{
    {
        union
        {
            struct
            {
                char charFirst, charSecond, charThird, charFourth;
            } structChars;
            long longNumber;
        } unionStructLong;
        unionStructLong.longNumber = 0x10203040;
<START>
        unionStructLong.structChars.charFourth |= 0x80; 
<END>
        printIntLine(unionStructLong.longNumber);
    }
}
