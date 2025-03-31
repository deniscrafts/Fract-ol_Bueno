/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denrodri <denrodri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 19:27:29 by denrodri          #+#    #+#             */
/*   Updated: 2025/03/12 19:56:54 by denrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVENTS_H
# define EVENTS_H

# include "fractal.h"

int	on_destroy_event(t_engine *engine);
int	on_mouse_hook_event(int key, int x, int y, t_engine *engine);
int	on_key_hook_event(int key, t_engine *engine);
int	on_mousemove_event(int x, int y, t_engine *engine);

#endif  /* EVENTS_H */
