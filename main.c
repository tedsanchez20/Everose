/*
** EPITECH PROJECT, 2021
** 
** File description:
** 
*/

  int main(void)                                                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                             
  float *disp = abs_vector(2, 4, 6);                                                                                                                                                                                                                                            
  printf("x = %.3f\n", disp[0]);                                                                                                                                                                                                                                                
  printf("y = %.3f\n", disp[1]);                                                                                                                                                                                                                                                
  printf("z = %.3f\n", disp[2]);                                                                                                                                                                                                                                                
  return (0);                                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                
  int main(int ac, char **av)                                                                                                                                                                                                                                                   
  {                                                                                                                                                                                                                                                                             
  float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));                                                                                                                                                                                                                
  printf("%.2f\n%.2f\n%.2f\n", V[0], V[1], V[2]);                                                                                                                                                                                                                               
  return (0);                                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                
  int main (int ac, char **av)                                                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                             
  float * V1 = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));                                                                                                                                                                                                               
  float * V2 = abs_vector(atof(av[4]), atof(av[5]), atof(av[6]));                                                                                                                                                                                                               
  float *V = sum_vector(V1, V2);                                                                                                                                                                                                                                                
  printf("%.2f\n%.2f\n%.2f\n", V[0], V[1], V[2]);                                                                                                                                                                                                                               
  return (0);                                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                
                                                                                                                                                                                                                                                                                
  int main (int ac, char **av)                                                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                             
  float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));                                                                                                                                                                                                                
  float * m = abs_vector(atof(av[0]));                                                                                                                                                                                                                                          
  float *Vx = coef_vector(V, m);                                                                                                                                                                                                                                                
  printf("%.2f\n%.2f\n%.2f\n", V[0], V[1], V[2]);                                                                                                                                                                                                                               
  return (0);                                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                
  int main (int ac, char **av)                                                                                                                                                                                                                                                  
  {                                                                                                                                                                                                                                                                             
  float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));                                                                                                                                                                                                                
  float k = norm_vector(V);                                                                                                                                                                                                                                                     
  printf("%.2f\n", k);                                                                                                                                                                                                                                                          
  return (0);                                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                
int main ()                                                                                                                                                                                                                                                                     
{                                                                                                                                                                                                                                                                               
    printf("%.2f\n", n);                                                                                                                                                                                                                                                        
    float * V = abs_vector(atof(av[1]), atof(av[2]), atof(av[3]));                                                                                                                                                                                                              
    float k = cord_vector(V);                                                                                                                                                                                                                                                   
    printf("%.2f\n%.2f\n%.2f\n", );                                                                                                                                                                                                                                             
}                                                                                                                                                                                                                                                                               
*/


/*                                                                                                                                                                                                                                                                              
  int main(void)                                                                                                                                                                                                                                                                
  {                                                                                                                                                                                                                                                                             
  float *disp = abs_vector(2, 4, 6);                                                                                                                                                                                                                                            
  printf("x = %.3f\n", disp[0]);                                                                                                                                                                                                                                                
  printf("y = %.3f\n", disp[1]);                                                                                                                                                                                                                                                
  printf("z = %.3f\n", disp[2]);                                                                                                                                                                                                                                                
  return (0);                                                                                                                                                                                                                                                                   
  }                                                                                                                                                                                                                                                                             
  
