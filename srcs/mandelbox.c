/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbox.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:37:25 by denrodri          #+#    #+#             */
/*   Updated: 2025/03/06 17:37:27 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractal.h"
#include "math.h"

static double	box_fold(double z)
{
	if (z > 1)
		z = 2 - z;
	else if (z < -1)
		z = -2 - z;
	return (z);
}

static double	ball_fold(double r, double m)
{
	if (m < r)
		m = m / (r * r);
	else if (m < 1)
		m = 1 / (m * m);
	return (m);
}

int	calc_mandelbox(t_fractal *fract, t_complex *c)
{
	double		mag;
	t_complex	z;
	int			i;

	i = -1;
	mag = 0;
	z.re = c->re;
	z.im = c->im;
	while ((sqrt(mag) < 2) && (++i < fract->iterations))
	{
		z.re = FIXED_RADIUS * box_fold(z.re);
		z.im = FIXED_RADIUS * box_fold(z.im);
		mag = sqrt(z.re * z.re + z.im * z.im);
		z.re = z.re * SCALE * ball_fold(MINIMUM_RADIUS, mag) + c->re;
		z.im = z.im * SCALE * ball_fold(MINIMUM_RADIUS, mag) + c->im;
	}
	return (i);
}
