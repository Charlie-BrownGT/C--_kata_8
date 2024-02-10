bool collinearity(int x1, int y1, int x2, int y2)
{
  int cross_product = (x1 * y2) - (y1 * x2);
  if(cross_product == 0){
    return true;
  }
  else
    return false;
}