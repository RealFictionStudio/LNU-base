
int Round( double value )
{
    int n = (int)value;
    float diff = value - n;
    if (diff >= 0.5 || diff <= -0.5){
        if(n < 0)
            return n - 1;
        return n + 1;
    }
    else
        return n;
}