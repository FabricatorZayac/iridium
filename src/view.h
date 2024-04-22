// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef VIEW_H
#define VIEW_H

#define GL_GLEXT_PROTOTYPES

#include <allegro5/allegro.h>
#include <allegro5/allegro_audio.h>
#include <allegro5/allegro_opengl.h>
#include <GL/glext.h>

#include "shader.h"

typedef struct {
	ALLEGRO_DISPLAY *display;
	ir_shader shader;
	GLuint vbo;
} ir_view;

void ir_view_drop(ir_view *view);
int ir_view_new(ir_view *view);

int ir_view_clear_lua(lua_State *L);
int ir_view_present_lua(lua_State *L);

#endif