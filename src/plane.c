/*
** plane.c for  in /home/joubert/delivery/raytracer1
** 
** Made by Joubert Miguel
** Login   <miguel.joubert@epitech.eu>
** 
** Started on  Sat Feb 25 16:53:59 2017 Joubert Miguel
** Last update Sat Feb 25 16:58:10 2017 Joubert Miguel
*/

#include <SFML/Graphics.h>

float	intersect_plane(sfVector3f eye_pos, sfVector3f dir_vector)
{
  if (dir_vector.z == 0) return (-1);
  return (- (eye_pos.z / dir_vector.z));
}
