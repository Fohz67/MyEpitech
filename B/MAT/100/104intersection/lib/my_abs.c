/*
** EPITECH PROJECT, 2022
** my_abs.c
** File description:
** my_abs.c
*/

#include "../include/my.h"

float my_abs(float nb)
{
    if (nb < 0) {
        nb = nb * -1;
    }
    return nb;
}
