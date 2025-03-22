#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed area_abc = ((a.getX() * (b.getY() - c.getY())) + 
                      (b.getX() * (c.getY() - a.getY())) + 
                      (c.getX() * (a.getY() - b.getY()))) / Fixed(2);
    
    Fixed area_pbc = ((point.getX() * (b.getY() - c.getY())) + 
                      (b.getX() * (c.getY() - point.getY())) + 
                      (c.getX() * (point.getY() - b.getY()))) / Fixed(2);
    
    Fixed area_apc = ((a.getX() * (point.getY() - c.getY())) + 
                      (point.getX() * (c.getY() - a.getY())) + 
                      (c.getX() * (a.getY() - point.getY()))) / Fixed(2);
    
    Fixed area_abp = ((a.getX() * (b.getY() - point.getY())) + 
                      (b.getX() * (point.getY() - a.getY())) + 
                      (point.getX() * (a.getY() - b.getY()))) / Fixed(2);
    
    if ((area_abc > 0 && area_pbc < 0) || (area_abc < 0 && area_pbc > 0))
        return false;
    if ((area_abc > 0 && area_apc < 0) || (area_abc < 0 && area_apc > 0))
        return false;
    if ((area_abc > 0 && area_abp < 0) || (area_abc < 0 && area_abp > 0))
        return false;
    
    if (area_pbc == 0 || area_apc == 0 || area_abp == 0)
        return false;
    
    return true;
}