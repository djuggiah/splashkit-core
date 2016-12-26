//
// SplashKit Generated C++ Code
// DO NOT MODIFY
//

#include "splashkit.h"
#include "sk_clib.h"
#include "adapter_type_mapper.h"

int animation_count(animation_script script) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    int __skreturn = __sklib__animation_count__animation_script(__skparam__script);
    return __skadapter__to_int(__skreturn);
}
int animation_current_cell(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    int __skreturn = __sklib__animation_current_cell__animation(__skparam__anim);
    return __skadapter__to_int(__skreturn);
}
vector_2d animation_current_vector(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_vector_2d __skreturn = __sklib__animation_current_vector__animation(__skparam__anim);
    return __skadapter__to_vector_2d(__skreturn);
}
bool animation_ended(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    int __skreturn = __sklib__animation_ended__animation(__skparam__anim);
    return __skadapter__to_bool(__skreturn);
}
bool animation_entered_frame(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    int __skreturn = __sklib__animation_entered_frame__animation(__skparam__anim);
    return __skadapter__to_bool(__skreturn);
}
float animation_frame_time(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    float __skreturn = __sklib__animation_frame_time__animation(__skparam__anim);
    return __skadapter__to_float(__skreturn);
}
int animation_index(animation_script script, const string &name) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__animation_index__animation_script__string_ref(__skparam__script, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
string animation_name(animation temp) {
    __sklib_animation __skparam__temp = __skadapter__to_sklib_animation(temp);
    __sklib_string __skreturn = __sklib__animation_name__animation(__skparam__temp);
    return __skadapter__to_string(__skreturn);
}
string animation_script_name(animation_script script) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    __sklib_string __skreturn = __sklib__animation_script_name__animation_script(__skparam__script);
    return __skadapter__to_string(__skreturn);
}
animation_script animation_script_named(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_animation_script __skreturn = __sklib__animation_script_named__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_animation_script(__skreturn);
}
void assign_animation(animation anim, animation_script script, const string &name) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__assign_animation__animation__animation_script__string_ref(__skparam__anim, __skparam__script, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void assign_animation(animation anim, animation_script script, const string &name, bool with_sound) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__assign_animation__animation__animation_script__string_ref__bool(__skparam__anim, __skparam__script, __skparam__name, __skparam__with_sound);
    __skadapter__free__sklib_string(__skparam__name);
}
void assign_animation(animation anim, animation_script script, int idx) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib__assign_animation__animation__animation_script__int(__skparam__anim, __skparam__script, __skparam__idx);
}
void assign_animation(animation anim, animation_script script, int idx, bool with_sound) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__assign_animation__animation__animation_script__int__bool(__skparam__anim, __skparam__script, __skparam__idx, __skparam__with_sound);
}
void assign_animation(animation anim, const string &script_name, const string &name) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    const __sklib_string __skparam__script_name = __skadapter__to_sklib_string(script_name);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__assign_animation__animation__string_ref__string_ref(__skparam__anim, __skparam__script_name, __skparam__name);
    __skadapter__free__sklib_string(__skparam__script_name);
    __skadapter__free__sklib_string(__skparam__name);
}
void assign_animation(animation anim, const string &script_name, const string &name, bool with_sound) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    const __sklib_string __skparam__script_name = __skadapter__to_sklib_string(script_name);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__assign_animation__animation__string_ref__string_ref__bool(__skparam__anim, __skparam__script_name, __skparam__name, __skparam__with_sound);
    __skadapter__free__sklib_string(__skparam__script_name);
    __skadapter__free__sklib_string(__skparam__name);
}
animation create_animation(animation_script script, int idx, bool with_sound) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib_animation __skreturn = __sklib__create_animation__animation_script__int__bool(__skparam__script, __skparam__idx, __skparam__with_sound);
    return __skadapter__to_animation(__skreturn);
}
animation create_animation(animation_script script, const string &name) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_animation __skreturn = __sklib__create_animation__animation_script__string_ref(__skparam__script, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_animation(__skreturn);
}
animation create_animation(animation_script script, const string &name, bool with_sound) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib_animation __skreturn = __sklib__create_animation__animation_script__string_ref__bool(__skparam__script, __skparam__name, __skparam__with_sound);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_animation(__skreturn);
}
animation create_animation(const string &script_name, const string &name) {
    const __sklib_string __skparam__script_name = __skadapter__to_sklib_string(script_name);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_animation __skreturn = __sklib__create_animation__string_ref__string_ref(__skparam__script_name, __skparam__name);
    __skadapter__free__sklib_string(__skparam__script_name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_animation(__skreturn);
}
animation create_animation(const string &script_name, const string &name, bool with_sound) {
    const __sklib_string __skparam__script_name = __skadapter__to_sklib_string(script_name);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib_animation __skreturn = __sklib__create_animation__string_ref__string_ref__bool(__skparam__script_name, __skparam__name, __skparam__with_sound);
    __skadapter__free__sklib_string(__skparam__script_name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_animation(__skreturn);
}
void free_all_animation_scripts() {
    __sklib__free_all_animation_scripts();
}
void free_animation(animation ani) {
    __sklib_animation __skparam__ani = __skadapter__to_sklib_animation(ani);
    __sklib__free_animation__animation(__skparam__ani);
}
void free_animation_script(animation_script script_to_free) {
    __sklib_animation_script __skparam__script_to_free = __skadapter__to_sklib_animation_script(script_to_free);
    __sklib__free_animation_script__animation_script(__skparam__script_to_free);
}
void free_animation_script(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__free_animation_script__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
bool has_animation_named(animation_script script, const string &name) {
    __sklib_animation_script __skparam__script = __skadapter__to_sklib_animation_script(script);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_animation_named__animation_script__string_ref(__skparam__script, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool has_animation_script(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_animation_script__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
animation_script load_animation_script(const string &name, const string &filename) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_animation_script __skreturn = __sklib__load_animation_script__string_ref__string_ref(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_animation_script(__skreturn);
}
void restart_animation(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib__restart_animation__animation(__skparam__anim);
}
void restart_animation(animation anim, bool with_sound) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__restart_animation__animation__bool(__skparam__anim, __skparam__with_sound);
}
void update_animation(animation anim, float pct, bool with_sound) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    float __skparam__pct = __skadapter__to_float(pct);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__update_animation__animation__float__bool(__skparam__anim, __skparam__pct, __skparam__with_sound);
}
void update_animation(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib__update_animation__animation(__skparam__anim);
}
void update_animation(animation anim, float pct) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    float __skparam__pct = __skadapter__to_float(pct);
    __sklib__update_animation__animation__float(__skparam__anim, __skparam__pct);
}
bool audio_ready() {
    int __skreturn = __sklib__audio_ready();
    return __skadapter__to_bool(__skreturn);
}
void close_audio() {
    __sklib__close_audio();
}
void open_audio() {
    __sklib__open_audio();
}
void free_resource_bundle(const string name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__free_resource_bundle__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
bool has_resource_bundle(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_resource_bundle__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
void load_resource_bundle(const string &name, const string &filename) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib__load_resource_bundle__string_ref__string_ref(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
}
point_2d camera_position() {
    __sklib_point_2d __skreturn = __sklib__camera_position();
    return __skadapter__to_point_2d(__skreturn);
}
float camera_x() {
    float __skreturn = __sklib__camera_x();
    return __skadapter__to_float(__skreturn);
}
float camera_y() {
    float __skreturn = __sklib__camera_y();
    return __skadapter__to_float(__skreturn);
}
void center_camera_on(sprite s, const vector_2d &offset) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib__center_camera_on__sprite__vector_2d_ref(__skparam__s, __skparam__offset);
}
void center_camera_on(sprite s, float offset_x, float offset_y) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__offset_x = __skadapter__to_float(offset_x);
    float __skparam__offset_y = __skadapter__to_float(offset_y);
    __sklib__center_camera_on__sprite__float__float(__skparam__s, __skparam__offset_x, __skparam__offset_y);
}
void move_camera_by(const vector_2d &offset) {
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib__move_camera_by__vector_2d_ref(__skparam__offset);
}
void move_camera_by(float dx, float dy) {
    float __skparam__dx = __skadapter__to_float(dx);
    float __skparam__dy = __skadapter__to_float(dy);
    __sklib__move_camera_by__float__float(__skparam__dx, __skparam__dy);
}
void move_camera_to(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib__move_camera_to__point_2d_ref(__skparam__pt);
}
void move_camera_to(float x, float y) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__move_camera_to__float__float(__skparam__x, __skparam__y);
}
bool point_in_window(window wind, const point_2d &pt) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__point_in_window__window__point_2d_ref(__skparam__wind, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool point_on_screen(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__point_on_screen__point_2d_ref(__skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool rect_in_window(window wind, const rectangle &rect) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__rect_in_window__window__rectangle_ref(__skparam__wind, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
bool rect_on_screen(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__rect_on_screen__rectangle_ref(__skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
point_2d screen_center() {
    __sklib_point_2d __skreturn = __sklib__screen_center();
    return __skadapter__to_point_2d(__skreturn);
}
rectangle screen_rectangle() {
    __sklib_rectangle __skreturn = __sklib__screen_rectangle();
    return __skadapter__to_rectangle(__skreturn);
}
void set_camera_position(point_2d pos) {
    __sklib_point_2d __skparam__pos = __skadapter__to_sklib_point_2d(pos);
    __sklib__set_camera_position__point_2d(__skparam__pos);
}
void set_camera_y(float y) {
    float __skparam__y = __skadapter__to_float(y);
    __sklib__set_camera_y__float(__skparam__y);
}
point_2d to_screen(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_point_2d __skreturn = __sklib__to_screen__point_2d_ref(__skparam__pt);
    return __skadapter__to_point_2d(__skreturn);
}
rectangle to_screen(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_rectangle __skreturn = __sklib__to_screen__rectangle_ref(__skparam__rect);
    return __skadapter__to_rectangle(__skreturn);
}
float to_screen_x(float world_x) {
    float __skparam__world_x = __skadapter__to_float(world_x);
    float __skreturn = __sklib__to_screen_x__float(__skparam__world_x);
    return __skadapter__to_float(__skreturn);
}
float to_screen_y(float world_y) {
    float __skparam__world_y = __skadapter__to_float(world_y);
    float __skreturn = __sklib__to_screen_y__float(__skparam__world_y);
    return __skadapter__to_float(__skreturn);
}
point_2d to_world(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_point_2d __skreturn = __sklib__to_world__point_2d_ref(__skparam__pt);
    return __skadapter__to_point_2d(__skreturn);
}
float to_world_x(float screen_x) {
    float __skparam__screen_x = __skadapter__to_float(screen_x);
    float __skreturn = __sklib__to_world_x__float(__skparam__screen_x);
    return __skadapter__to_float(__skreturn);
}
float to_world_y(float screen_y) {
    float __skparam__screen_y = __skadapter__to_float(screen_y);
    float __skreturn = __sklib__to_world_y__float(__skparam__screen_y);
    return __skadapter__to_float(__skreturn);
}
vector_2d vector_world_to_screen() {
    __sklib_vector_2d __skreturn = __sklib__vector_world_to_screen();
    return __skadapter__to_vector_2d(__skreturn);
}
rectangle window_area(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_rectangle __skreturn = __sklib__window_area__window(__skparam__wind);
    return __skadapter__to_rectangle(__skreturn);
}
void bitmap_draw_circle(bitmap destination, color clr, float x, float y, float radius) {
    __sklib_bitmap __skparam__destination = __skadapter__to_sklib_bitmap(destination);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib__bitmap_draw_circle__bitmap__color__float__float__float(__skparam__destination, __skparam__clr, __skparam__x, __skparam__y, __skparam__radius);
}
void bitmap_draw_circle(bitmap destination, color clr, float x, float y, float radius, drawing_options opts) {
    __sklib_bitmap __skparam__destination = __skadapter__to_sklib_bitmap(destination);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__bitmap_draw_circle__bitmap__color__float__float__float__drawing_options(__skparam__destination, __skparam__clr, __skparam__x, __skparam__y, __skparam__radius, __skparam__opts);
}
void draw_circle(color clr, const circle &c) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib__draw_circle__color__circle_ref(__skparam__clr, __skparam__c);
}
void draw_circle(color clr, const circle &c, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_circle__color__circle_ref__drawing_options(__skparam__clr, __skparam__c, __skparam__opts);
}
void draw_circle(color clr, float x, float y, float radius) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib__draw_circle__color__float__float__float(__skparam__clr, __skparam__x, __skparam__y, __skparam__radius);
}
void draw_circle(color clr, float x, float y, float radius, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_circle__color__float__float__float__drawing_options(__skparam__clr, __skparam__x, __skparam__y, __skparam__radius, __skparam__opts);
}
void fill_circle(color clr, const circle &c) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib__fill_circle__color__circle_ref(__skparam__clr, __skparam__c);
}
void fill_circle(color clr, const circle &c, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_circle__color__circle_ref__drawing_options(__skparam__clr, __skparam__c, __skparam__opts);
}
void fill_circle(color clr, float x, float y, float radius) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib__fill_circle__color__float__float__float(__skparam__clr, __skparam__x, __skparam__y, __skparam__radius);
}
void fill_circle(color clr, float x, float y, float radius, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_circle__color__float__float__float__drawing_options(__skparam__clr, __skparam__x, __skparam__y, __skparam__radius, __skparam__opts);
}
void window_draw_circle(window destination, color clr, float x, float y, float radius) {
    __sklib_window __skparam__destination = __skadapter__to_sklib_window(destination);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib__window_draw_circle__window__color__float__float__float(__skparam__destination, __skparam__clr, __skparam__x, __skparam__y, __skparam__radius);
}
void window_draw_circle(window destination, color clr, float x, float y, float radius, drawing_options opts) {
    __sklib_window __skparam__destination = __skadapter__to_sklib_window(destination);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__window_draw_circle__window__color__float__float__float__drawing_options(__skparam__destination, __skparam__clr, __skparam__x, __skparam__y, __skparam__radius, __skparam__opts);
}
point_2d center_point(const circle &c) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_point_2d __skreturn = __sklib__center_point__circle_ref(__skparam__c);
    return __skadapter__to_point_2d(__skreturn);
}
circle circle_at(const point_2d &pt, float radius) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib_circle __skreturn = __sklib__circle_at__point_2d_ref__float(__skparam__pt, __skparam__radius);
    return __skadapter__to_circle(__skreturn);
}
circle circle_at(float x, float y, float radius) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__radius = __skadapter__to_float(radius);
    __sklib_circle __skreturn = __sklib__circle_at__float__float__float(__skparam__x, __skparam__y, __skparam__radius);
    return __skadapter__to_circle(__skreturn);
}
float circle_radius(const circle c) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    float __skreturn = __sklib__circle_radius__circle(__skparam__c);
    return __skadapter__to_float(__skreturn);
}
float circle_x(const circle &c) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    float __skreturn = __sklib__circle_x__circle_ref(__skparam__c);
    return __skadapter__to_float(__skreturn);
}
float circle_y(const circle &c) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    float __skreturn = __sklib__circle_y__circle_ref(__skparam__c);
    return __skadapter__to_float(__skreturn);
}
bool circles_intersect(circle c1, circle c2) {
    __sklib_circle __skparam__c1 = __skadapter__to_sklib_circle(c1);
    __sklib_circle __skparam__c2 = __skadapter__to_sklib_circle(c2);
    int __skreturn = __sklib__circles_intersect__circle__circle(__skparam__c1, __skparam__c2);
    return __skadapter__to_bool(__skreturn);
}
point_2d closest_point_on_circle(const point_2d &from_pt, const circle &c) {
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_point_2d __skreturn = __sklib__closest_point_on_circle__point_2d_ref__circle_ref(__skparam__from_pt, __skparam__c);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d closest_point_on_line_from_circle(const circle &c, const line &l) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_point_2d __skreturn = __sklib__closest_point_on_line_from_circle__circle_ref__line_ref(__skparam__c, __skparam__l);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d closest_point_on_rect_from_circle(const circle &c, const rectangle &rect) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_point_2d __skreturn = __sklib__closest_point_on_rect_from_circle__circle_ref__rectangle_ref(__skparam__c, __skparam__rect);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d distant_point_on_circle(const point_2d &pt, const circle &c) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_point_2d __skreturn = __sklib__distant_point_on_circle__point_2d_ref__circle_ref(__skparam__pt, __skparam__c);
    return __skadapter__to_point_2d(__skreturn);
}
bool distant_point_on_circle_heading(const point_2d &pt, const circle &c, const vector_2d &heading, point_2d &opposite_pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    const __sklib_vector_2d __skparam__heading = __skadapter__to_sklib_vector_2d(heading);
    __sklib_point_2d __skparam__opposite_pt = __skadapter__to_sklib_point_2d(opposite_pt);
    int __skreturn = __sklib__distant_point_on_circle_heading__point_2d_ref__circle_ref__vector_2d_ref__point_2d_ref(__skparam__pt, __skparam__c, __skparam__heading, &__skparam__opposite_pt);
    opposite_pt = __skadapter__to_point_2d(__skparam__opposite_pt);
    return __skadapter__to_bool(__skreturn);
}
float ray_circle_intersect_distance(const point_2d &ray_origin, const vector_2d &ray_heading, const circle &c) {
    const __sklib_point_2d __skparam__ray_origin = __skadapter__to_sklib_point_2d(ray_origin);
    const __sklib_vector_2d __skparam__ray_heading = __skadapter__to_sklib_vector_2d(ray_heading);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    float __skreturn = __sklib__ray_circle_intersect_distance__point_2d_ref__vector_2d_ref__circle_ref(__skparam__ray_origin, __skparam__ray_heading, __skparam__c);
    return __skadapter__to_float(__skreturn);
}
bool tangent_points(const point_2d &from_pt, const circle &c, point_2d &p1, point_2d &p2) {
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_point_2d __skparam__p1 = __skadapter__to_sklib_point_2d(p1);
    __sklib_point_2d __skparam__p2 = __skadapter__to_sklib_point_2d(p2);
    int __skreturn = __sklib__tangent_points__point_2d_ref__circle_ref__point_2d_ref__point_2d_ref(__skparam__from_pt, __skparam__c, &__skparam__p1, &__skparam__p2);
    p1 = __skadapter__to_point_2d(__skparam__p1);
    p2 = __skadapter__to_point_2d(__skparam__p2);
    return __skadapter__to_bool(__skreturn);
}
void widest_points(const circle &c, const vector_2d &along, point_2d &pt1, point_2d &pt2) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    const __sklib_vector_2d __skparam__along = __skadapter__to_sklib_vector_2d(along);
    __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    __sklib__widest_points__circle_ref__vector_2d_ref__point_2d_ref__point_2d_ref(__skparam__c, __skparam__along, &__skparam__pt1, &__skparam__pt2);
    pt1 = __skadapter__to_point_2d(__skparam__pt1);
    pt2 = __skadapter__to_point_2d(__skparam__pt2);
}
rectangle current_clip() {
    __sklib_rectangle __skreturn = __sklib__current_clip();
    return __skadapter__to_rectangle(__skreturn);
}
rectangle current_clip(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_rectangle __skreturn = __sklib__current_clip__bitmap(__skparam__bmp);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle current_clip(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    __sklib_rectangle __skreturn = __sklib__current_clip__window(__skparam__wnd);
    return __skadapter__to_rectangle(__skreturn);
}
void pop_clip(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    __sklib__pop_clip__window(__skparam__wnd);
}
void pop_clip() {
    __sklib__pop_clip();
}
void pop_clip(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib__pop_clip__bitmap(__skparam__bmp);
}
void push_clip(window wnd, const rectangle &r) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    const __sklib_rectangle __skparam__r = __skadapter__to_sklib_rectangle(r);
    __sklib__push_clip__window__rectangle_ref(__skparam__wnd, __skparam__r);
}
void push_clip(bitmap bmp, const rectangle &r) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_rectangle __skparam__r = __skadapter__to_sklib_rectangle(r);
    __sklib__push_clip__bitmap__rectangle_ref(__skparam__bmp, __skparam__r);
}
void push_clip(const rectangle &r) {
    const __sklib_rectangle __skparam__r = __skadapter__to_sklib_rectangle(r);
    __sklib__push_clip__rectangle_ref(__skparam__r);
}
void reset_clip(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib__reset_clip__bitmap(__skparam__bmp);
}
void reset_clip() {
    __sklib__reset_clip();
}
void reset_clip(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    __sklib__reset_clip__window(__skparam__wnd);
}
void set_clip(const rectangle &r) {
    const __sklib_rectangle __skparam__r = __skadapter__to_sklib_rectangle(r);
    __sklib__set_clip__rectangle_ref(__skparam__r);
}
void set_clip(bitmap bmp, const rectangle &r) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_rectangle __skparam__r = __skadapter__to_sklib_rectangle(r);
    __sklib__set_clip__bitmap__rectangle_ref(__skparam__bmp, __skparam__r);
}
void set_clip(window wnd, const rectangle &r) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    const __sklib_rectangle __skparam__r = __skadapter__to_sklib_rectangle(r);
    __sklib__set_clip__window__rectangle_ref(__skparam__wnd, __skparam__r);
}
bool bitmap_collision(bitmap bmp1, float x1, float y1, bitmap bmp2, float x2, float y2) {
    __sklib_bitmap __skparam__bmp1 = __skadapter__to_sklib_bitmap(bmp1);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    __sklib_bitmap __skparam__bmp2 = __skadapter__to_sklib_bitmap(bmp2);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    int __skreturn = __sklib__bitmap_collision__bitmap__float__float__bitmap__float__float(__skparam__bmp1, __skparam__x1, __skparam__y1, __skparam__bmp2, __skparam__x2, __skparam__y2);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_collision(bitmap bmp1, const point_2d &pt1, bitmap bmp2, const point_2d &pt2) {
    __sklib_bitmap __skparam__bmp1 = __skadapter__to_sklib_bitmap(bmp1);
    const __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    __sklib_bitmap __skparam__bmp2 = __skadapter__to_sklib_bitmap(bmp2);
    const __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    int __skreturn = __sklib__bitmap_collision__bitmap__point_2d_ref__bitmap__point_2d_ref(__skparam__bmp1, __skparam__pt1, __skparam__bmp2, __skparam__pt2);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_collision(bitmap bmp1, int cell1, const matrix_2d &matrix1, bitmap bmp2, int cell2, const matrix_2d &matrix2) {
    __sklib_bitmap __skparam__bmp1 = __skadapter__to_sklib_bitmap(bmp1);
    int __skparam__cell1 = __skadapter__to_int(cell1);
    const __sklib_matrix_2d __skparam__matrix1 = __skadapter__to_sklib_matrix_2d(matrix1);
    __sklib_bitmap __skparam__bmp2 = __skadapter__to_sklib_bitmap(bmp2);
    int __skparam__cell2 = __skadapter__to_int(cell2);
    const __sklib_matrix_2d __skparam__matrix2 = __skadapter__to_sklib_matrix_2d(matrix2);
    int __skreturn = __sklib__bitmap_collision__bitmap__int__matrix_2d_ref__bitmap__int__matrix_2d_ref(__skparam__bmp1, __skparam__cell1, __skparam__matrix1, __skparam__bmp2, __skparam__cell2, __skparam__matrix2);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_collision(bitmap bmp1, int cell1, const point_2d &pt1, bitmap bmp2, int cell2, const point_2d &pt2) {
    __sklib_bitmap __skparam__bmp1 = __skadapter__to_sklib_bitmap(bmp1);
    int __skparam__cell1 = __skadapter__to_int(cell1);
    const __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    __sklib_bitmap __skparam__bmp2 = __skadapter__to_sklib_bitmap(bmp2);
    int __skparam__cell2 = __skadapter__to_int(cell2);
    const __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    int __skreturn = __sklib__bitmap_collision__bitmap__int__point_2d_ref__bitmap__int__point_2d_ref(__skparam__bmp1, __skparam__cell1, __skparam__pt1, __skparam__bmp2, __skparam__cell2, __skparam__pt2);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_collision(bitmap bmp1, int cell1, float x1, float y1, bitmap bmp2, int cell2, float x2, float y2) {
    __sklib_bitmap __skparam__bmp1 = __skadapter__to_sklib_bitmap(bmp1);
    int __skparam__cell1 = __skadapter__to_int(cell1);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    __sklib_bitmap __skparam__bmp2 = __skadapter__to_sklib_bitmap(bmp2);
    int __skparam__cell2 = __skadapter__to_int(cell2);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    int __skreturn = __sklib__bitmap_collision__bitmap__int__float__float__bitmap__int__float__float(__skparam__bmp1, __skparam__cell1, __skparam__x1, __skparam__y1, __skparam__bmp2, __skparam__cell2, __skparam__x2, __skparam__y2);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_point_collision(bitmap bmp, const matrix_2d &translation, const point_2d &pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_matrix_2d __skparam__translation = __skadapter__to_sklib_matrix_2d(translation);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__bitmap_point_collision__bitmap__matrix_2d_ref__point_2d_ref(__skparam__bmp, __skparam__translation, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_point_collision(bitmap bmp, const point_2d &pt, const point_2d &bmp_pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_point_2d __skparam__bmp_pt = __skadapter__to_sklib_point_2d(bmp_pt);
    int __skreturn = __sklib__bitmap_point_collision__bitmap__point_2d_ref__point_2d_ref(__skparam__bmp, __skparam__pt, __skparam__bmp_pt);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_point_collision(bitmap bmp, float bmp_x, float bmp_y, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__bmp_x = __skadapter__to_float(bmp_x);
    float __skparam__bmp_y = __skadapter__to_float(bmp_y);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    int __skreturn = __sklib__bitmap_point_collision__bitmap__float__float__float__float(__skparam__bmp, __skparam__bmp_x, __skparam__bmp_y, __skparam__x, __skparam__y);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_point_collision(bitmap bmp, int cell, const matrix_2d &translation, const point_2d &pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    const __sklib_matrix_2d __skparam__translation = __skadapter__to_sklib_matrix_2d(translation);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__bitmap_point_collision__bitmap__int__matrix_2d_ref__point_2d_ref(__skparam__bmp, __skparam__cell, __skparam__translation, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_rectangle_collision(bitmap bmp, int cell, const matrix_2d &translation, const rectangle &rect) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    const __sklib_matrix_2d __skparam__translation = __skadapter__to_sklib_matrix_2d(translation);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__bitmap_rectangle_collision__bitmap__int__matrix_2d_ref__rectangle_ref(__skparam__bmp, __skparam__cell, __skparam__translation, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
bool bitmap_rectangle_collision(bitmap bmp, int cell, const point_2d &pt, const rectangle &rect) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__bitmap_rectangle_collision__bitmap__int__point_2d_ref__rectangle_ref(__skparam__bmp, __skparam__cell, __skparam__pt, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_bitmap_collision(sprite s, bitmap bmp, float x, float y) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    int __skreturn = __sklib__sprite_bitmap_collision__sprite__bitmap__float__float(__skparam__s, __skparam__bmp, __skparam__x, __skparam__y);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_bitmap_collision(sprite s, bitmap bmp, int cell, const point_2d &pt) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__sprite_bitmap_collision__sprite__bitmap__int__point_2d_ref(__skparam__s, __skparam__bmp, __skparam__cell, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_bitmap_collision(sprite s, bitmap bmp, int cell, float x, float y) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    int __skreturn = __sklib__sprite_bitmap_collision__sprite__bitmap__int__float__float(__skparam__s, __skparam__bmp, __skparam__cell, __skparam__x, __skparam__y);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_collision(sprite s1, sprite s2) {
    __sklib_sprite __skparam__s1 = __skadapter__to_sklib_sprite(s1);
    __sklib_sprite __skparam__s2 = __skadapter__to_sklib_sprite(s2);
    int __skreturn = __sklib__sprite_collision__sprite__sprite(__skparam__s1, __skparam__s2);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_point_collision(sprite s, const point_2d &pt) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__sprite_point_collision__sprite__point_2d_ref(__skparam__s, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_rectangle_collision(sprite s, const rectangle &rect) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__sprite_rectangle_collision__sprite__rectangle_ref(__skparam__s, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
int alpha_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    int __skreturn = __sklib__alpha_of__color(__skparam__c);
    return __skadapter__to_int(__skreturn);
}
int blue_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    int __skreturn = __sklib__blue_of__color(__skparam__c);
    return __skadapter__to_int(__skreturn);
}
float brightness_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    float __skreturn = __sklib__brightness_of__color(__skparam__c);
    return __skadapter__to_float(__skreturn);
}
color color_alice_blue() {
    __sklib_color __skreturn = __sklib__color_alice_blue();
    return __skadapter__to_color(__skreturn);
}
color color_antique_white() {
    __sklib_color __skreturn = __sklib__color_antique_white();
    return __skadapter__to_color(__skreturn);
}
color color_aqua() {
    __sklib_color __skreturn = __sklib__color_aqua();
    return __skadapter__to_color(__skreturn);
}
color color_aquamarine() {
    __sklib_color __skreturn = __sklib__color_aquamarine();
    return __skadapter__to_color(__skreturn);
}
color color_azure() {
    __sklib_color __skreturn = __sklib__color_azure();
    return __skadapter__to_color(__skreturn);
}
color color_beige() {
    __sklib_color __skreturn = __sklib__color_beige();
    return __skadapter__to_color(__skreturn);
}
color color_bisque() {
    __sklib_color __skreturn = __sklib__color_bisque();
    return __skadapter__to_color(__skreturn);
}
color color_black() {
    __sklib_color __skreturn = __sklib__color_black();
    return __skadapter__to_color(__skreturn);
}
color color_blanched_almond() {
    __sklib_color __skreturn = __sklib__color_blanched_almond();
    return __skadapter__to_color(__skreturn);
}
color color_blue() {
    __sklib_color __skreturn = __sklib__color_blue();
    return __skadapter__to_color(__skreturn);
}
color color_blue_violet() {
    __sklib_color __skreturn = __sklib__color_blue_violet();
    return __skadapter__to_color(__skreturn);
}
color color_bright_green() {
    __sklib_color __skreturn = __sklib__color_bright_green();
    return __skadapter__to_color(__skreturn);
}
color color_brown() {
    __sklib_color __skreturn = __sklib__color_brown();
    return __skadapter__to_color(__skreturn);
}
color color_burly_wood() {
    __sklib_color __skreturn = __sklib__color_burly_wood();
    return __skadapter__to_color(__skreturn);
}
color color_cadet_blue() {
    __sklib_color __skreturn = __sklib__color_cadet_blue();
    return __skadapter__to_color(__skreturn);
}
color color_chartreuse() {
    __sklib_color __skreturn = __sklib__color_chartreuse();
    return __skadapter__to_color(__skreturn);
}
color color_chocolate() {
    __sklib_color __skreturn = __sklib__color_chocolate();
    return __skadapter__to_color(__skreturn);
}
color color_coral() {
    __sklib_color __skreturn = __sklib__color_coral();
    return __skadapter__to_color(__skreturn);
}
color color_cornflower_blue() {
    __sklib_color __skreturn = __sklib__color_cornflower_blue();
    return __skadapter__to_color(__skreturn);
}
color color_cornsilk() {
    __sklib_color __skreturn = __sklib__color_cornsilk();
    return __skadapter__to_color(__skreturn);
}
color color_crimson() {
    __sklib_color __skreturn = __sklib__color_crimson();
    return __skadapter__to_color(__skreturn);
}
color color_cyan() {
    __sklib_color __skreturn = __sklib__color_cyan();
    return __skadapter__to_color(__skreturn);
}
color color_dark_blue() {
    __sklib_color __skreturn = __sklib__color_dark_blue();
    return __skadapter__to_color(__skreturn);
}
color color_dark_cyan() {
    __sklib_color __skreturn = __sklib__color_dark_cyan();
    return __skadapter__to_color(__skreturn);
}
color color_dark_goldenrod() {
    __sklib_color __skreturn = __sklib__color_dark_goldenrod();
    return __skadapter__to_color(__skreturn);
}
color color_dark_gray() {
    __sklib_color __skreturn = __sklib__color_dark_gray();
    return __skadapter__to_color(__skreturn);
}
color color_dark_green() {
    __sklib_color __skreturn = __sklib__color_dark_green();
    return __skadapter__to_color(__skreturn);
}
color color_dark_khaki() {
    __sklib_color __skreturn = __sklib__color_dark_khaki();
    return __skadapter__to_color(__skreturn);
}
color color_dark_magenta() {
    __sklib_color __skreturn = __sklib__color_dark_magenta();
    return __skadapter__to_color(__skreturn);
}
color color_dark_olive_green() {
    __sklib_color __skreturn = __sklib__color_dark_olive_green();
    return __skadapter__to_color(__skreturn);
}
color color_dark_orange() {
    __sklib_color __skreturn = __sklib__color_dark_orange();
    return __skadapter__to_color(__skreturn);
}
color color_dark_orchid() {
    __sklib_color __skreturn = __sklib__color_dark_orchid();
    return __skadapter__to_color(__skreturn);
}
color color_dark_red() {
    __sklib_color __skreturn = __sklib__color_dark_red();
    return __skadapter__to_color(__skreturn);
}
color color_dark_salmon() {
    __sklib_color __skreturn = __sklib__color_dark_salmon();
    return __skadapter__to_color(__skreturn);
}
color color_dark_sea_green() {
    __sklib_color __skreturn = __sklib__color_dark_sea_green();
    return __skadapter__to_color(__skreturn);
}
color color_dark_slate_blue() {
    __sklib_color __skreturn = __sklib__color_dark_slate_blue();
    return __skadapter__to_color(__skreturn);
}
color color_dark_slate_gray() {
    __sklib_color __skreturn = __sklib__color_dark_slate_gray();
    return __skadapter__to_color(__skreturn);
}
color color_dark_turquoise() {
    __sklib_color __skreturn = __sklib__color_dark_turquoise();
    return __skadapter__to_color(__skreturn);
}
color color_dark_violet() {
    __sklib_color __skreturn = __sklib__color_dark_violet();
    return __skadapter__to_color(__skreturn);
}
color color_deep_pink() {
    __sklib_color __skreturn = __sklib__color_deep_pink();
    return __skadapter__to_color(__skreturn);
}
color color_deep_sky_blue() {
    __sklib_color __skreturn = __sklib__color_deep_sky_blue();
    return __skadapter__to_color(__skreturn);
}
color color_dim_gray() {
    __sklib_color __skreturn = __sklib__color_dim_gray();
    return __skadapter__to_color(__skreturn);
}
color color_dodger_blue() {
    __sklib_color __skreturn = __sklib__color_dodger_blue();
    return __skadapter__to_color(__skreturn);
}
color color_firebrick() {
    __sklib_color __skreturn = __sklib__color_firebrick();
    return __skadapter__to_color(__skreturn);
}
color color_floral_white() {
    __sklib_color __skreturn = __sklib__color_floral_white();
    return __skadapter__to_color(__skreturn);
}
color color_forest_green() {
    __sklib_color __skreturn = __sklib__color_forest_green();
    return __skadapter__to_color(__skreturn);
}
color color_fuchsia() {
    __sklib_color __skreturn = __sklib__color_fuchsia();
    return __skadapter__to_color(__skreturn);
}
color color_gainsboro() {
    __sklib_color __skreturn = __sklib__color_gainsboro();
    return __skadapter__to_color(__skreturn);
}
color color_ghost_white() {
    __sklib_color __skreturn = __sklib__color_ghost_white();
    return __skadapter__to_color(__skreturn);
}
color color_gold() {
    __sklib_color __skreturn = __sklib__color_gold();
    return __skadapter__to_color(__skreturn);
}
color color_goldenrod() {
    __sklib_color __skreturn = __sklib__color_goldenrod();
    return __skadapter__to_color(__skreturn);
}
color color_gray() {
    __sklib_color __skreturn = __sklib__color_gray();
    return __skadapter__to_color(__skreturn);
}
color color_green() {
    __sklib_color __skreturn = __sklib__color_green();
    return __skadapter__to_color(__skreturn);
}
color color_green_yellow() {
    __sklib_color __skreturn = __sklib__color_green_yellow();
    return __skadapter__to_color(__skreturn);
}
color color_honeydew() {
    __sklib_color __skreturn = __sklib__color_honeydew();
    return __skadapter__to_color(__skreturn);
}
color color_hot_pink() {
    __sklib_color __skreturn = __sklib__color_hot_pink();
    return __skadapter__to_color(__skreturn);
}
color color_indian_red() {
    __sklib_color __skreturn = __sklib__color_indian_red();
    return __skadapter__to_color(__skreturn);
}
color color_indigo() {
    __sklib_color __skreturn = __sklib__color_indigo();
    return __skadapter__to_color(__skreturn);
}
color color_ivory() {
    __sklib_color __skreturn = __sklib__color_ivory();
    return __skadapter__to_color(__skreturn);
}
color color_khaki() {
    __sklib_color __skreturn = __sklib__color_khaki();
    return __skadapter__to_color(__skreturn);
}
color color_lavender() {
    __sklib_color __skreturn = __sklib__color_lavender();
    return __skadapter__to_color(__skreturn);
}
color color_lavender_blush() {
    __sklib_color __skreturn = __sklib__color_lavender_blush();
    return __skadapter__to_color(__skreturn);
}
color color_lawn_green() {
    __sklib_color __skreturn = __sklib__color_lawn_green();
    return __skadapter__to_color(__skreturn);
}
color color_lemon_chiffon() {
    __sklib_color __skreturn = __sklib__color_lemon_chiffon();
    return __skadapter__to_color(__skreturn);
}
color color_light_blue() {
    __sklib_color __skreturn = __sklib__color_light_blue();
    return __skadapter__to_color(__skreturn);
}
color color_light_coral() {
    __sklib_color __skreturn = __sklib__color_light_coral();
    return __skadapter__to_color(__skreturn);
}
color color_light_cyan() {
    __sklib_color __skreturn = __sklib__color_light_cyan();
    return __skadapter__to_color(__skreturn);
}
color color_light_goldenrod_yellow() {
    __sklib_color __skreturn = __sklib__color_light_goldenrod_yellow();
    return __skadapter__to_color(__skreturn);
}
color color_light_gray() {
    __sklib_color __skreturn = __sklib__color_light_gray();
    return __skadapter__to_color(__skreturn);
}
color color_light_green() {
    __sklib_color __skreturn = __sklib__color_light_green();
    return __skadapter__to_color(__skreturn);
}
color color_light_pink() {
    __sklib_color __skreturn = __sklib__color_light_pink();
    return __skadapter__to_color(__skreturn);
}
color color_light_salmon() {
    __sklib_color __skreturn = __sklib__color_light_salmon();
    return __skadapter__to_color(__skreturn);
}
color color_light_sea_green() {
    __sklib_color __skreturn = __sklib__color_light_sea_green();
    return __skadapter__to_color(__skreturn);
}
color color_light_sky_blue() {
    __sklib_color __skreturn = __sklib__color_light_sky_blue();
    return __skadapter__to_color(__skreturn);
}
color color_light_slate_gray() {
    __sklib_color __skreturn = __sklib__color_light_slate_gray();
    return __skadapter__to_color(__skreturn);
}
color color_light_steel_blue() {
    __sklib_color __skreturn = __sklib__color_light_steel_blue();
    return __skadapter__to_color(__skreturn);
}
color color_light_yellow() {
    __sklib_color __skreturn = __sklib__color_light_yellow();
    return __skadapter__to_color(__skreturn);
}
color color_lime() {
    __sklib_color __skreturn = __sklib__color_lime();
    return __skadapter__to_color(__skreturn);
}
color color_lime_green() {
    __sklib_color __skreturn = __sklib__color_lime_green();
    return __skadapter__to_color(__skreturn);
}
color color_linen() {
    __sklib_color __skreturn = __sklib__color_linen();
    return __skadapter__to_color(__skreturn);
}
color color_magenta() {
    __sklib_color __skreturn = __sklib__color_magenta();
    return __skadapter__to_color(__skreturn);
}
color color_maroon() {
    __sklib_color __skreturn = __sklib__color_maroon();
    return __skadapter__to_color(__skreturn);
}
color color_medium_aquamarine() {
    __sklib_color __skreturn = __sklib__color_medium_aquamarine();
    return __skadapter__to_color(__skreturn);
}
color color_medium_blue() {
    __sklib_color __skreturn = __sklib__color_medium_blue();
    return __skadapter__to_color(__skreturn);
}
color color_medium_orchid() {
    __sklib_color __skreturn = __sklib__color_medium_orchid();
    return __skadapter__to_color(__skreturn);
}
color color_medium_purple() {
    __sklib_color __skreturn = __sklib__color_medium_purple();
    return __skadapter__to_color(__skreturn);
}
color color_medium_sea_green() {
    __sklib_color __skreturn = __sklib__color_medium_sea_green();
    return __skadapter__to_color(__skreturn);
}
color color_medium_slate_blue() {
    __sklib_color __skreturn = __sklib__color_medium_slate_blue();
    return __skadapter__to_color(__skreturn);
}
color color_medium_spring_green() {
    __sklib_color __skreturn = __sklib__color_medium_spring_green();
    return __skadapter__to_color(__skreturn);
}
color color_medium_turquoise() {
    __sklib_color __skreturn = __sklib__color_medium_turquoise();
    return __skadapter__to_color(__skreturn);
}
color color_medium_violet_red() {
    __sklib_color __skreturn = __sklib__color_medium_violet_red();
    return __skadapter__to_color(__skreturn);
}
color color_midnight_blue() {
    __sklib_color __skreturn = __sklib__color_midnight_blue();
    return __skadapter__to_color(__skreturn);
}
color color_mint_cream() {
    __sklib_color __skreturn = __sklib__color_mint_cream();
    return __skadapter__to_color(__skreturn);
}
color color_misty_rose() {
    __sklib_color __skreturn = __sklib__color_misty_rose();
    return __skadapter__to_color(__skreturn);
}
color color_moccasin() {
    __sklib_color __skreturn = __sklib__color_moccasin();
    return __skadapter__to_color(__skreturn);
}
color color_navajo_white() {
    __sklib_color __skreturn = __sklib__color_navajo_white();
    return __skadapter__to_color(__skreturn);
}
color color_navy() {
    __sklib_color __skreturn = __sklib__color_navy();
    return __skadapter__to_color(__skreturn);
}
color color_old_lace() {
    __sklib_color __skreturn = __sklib__color_old_lace();
    return __skadapter__to_color(__skreturn);
}
color color_olive() {
    __sklib_color __skreturn = __sklib__color_olive();
    return __skadapter__to_color(__skreturn);
}
color color_olive_drab() {
    __sklib_color __skreturn = __sklib__color_olive_drab();
    return __skadapter__to_color(__skreturn);
}
color color_orange() {
    __sklib_color __skreturn = __sklib__color_orange();
    return __skadapter__to_color(__skreturn);
}
color color_orange_red() {
    __sklib_color __skreturn = __sklib__color_orange_red();
    return __skadapter__to_color(__skreturn);
}
color color_orchid() {
    __sklib_color __skreturn = __sklib__color_orchid();
    return __skadapter__to_color(__skreturn);
}
color color_pale_goldenrod() {
    __sklib_color __skreturn = __sklib__color_pale_goldenrod();
    return __skadapter__to_color(__skreturn);
}
color color_pale_green() {
    __sklib_color __skreturn = __sklib__color_pale_green();
    return __skadapter__to_color(__skreturn);
}
color color_pale_turquoise() {
    __sklib_color __skreturn = __sklib__color_pale_turquoise();
    return __skadapter__to_color(__skreturn);
}
color color_pale_violet_red() {
    __sklib_color __skreturn = __sklib__color_pale_violet_red();
    return __skadapter__to_color(__skreturn);
}
color color_papaya_whip() {
    __sklib_color __skreturn = __sklib__color_papaya_whip();
    return __skadapter__to_color(__skreturn);
}
color color_peach_puff() {
    __sklib_color __skreturn = __sklib__color_peach_puff();
    return __skadapter__to_color(__skreturn);
}
color color_peru() {
    __sklib_color __skreturn = __sklib__color_peru();
    return __skadapter__to_color(__skreturn);
}
color color_pink() {
    __sklib_color __skreturn = __sklib__color_pink();
    return __skadapter__to_color(__skreturn);
}
color color_plum() {
    __sklib_color __skreturn = __sklib__color_plum();
    return __skadapter__to_color(__skreturn);
}
color color_powder_blue() {
    __sklib_color __skreturn = __sklib__color_powder_blue();
    return __skadapter__to_color(__skreturn);
}
color color_purple() {
    __sklib_color __skreturn = __sklib__color_purple();
    return __skadapter__to_color(__skreturn);
}
color color_red() {
    __sklib_color __skreturn = __sklib__color_red();
    return __skadapter__to_color(__skreturn);
}
color color_rosy_brown() {
    __sklib_color __skreturn = __sklib__color_rosy_brown();
    return __skadapter__to_color(__skreturn);
}
color color_royal_blue() {
    __sklib_color __skreturn = __sklib__color_royal_blue();
    return __skadapter__to_color(__skreturn);
}
color color_saddle_brown() {
    __sklib_color __skreturn = __sklib__color_saddle_brown();
    return __skadapter__to_color(__skreturn);
}
color color_salmon() {
    __sklib_color __skreturn = __sklib__color_salmon();
    return __skadapter__to_color(__skreturn);
}
color color_sandy_brown() {
    __sklib_color __skreturn = __sklib__color_sandy_brown();
    return __skadapter__to_color(__skreturn);
}
color color_sea_green() {
    __sklib_color __skreturn = __sklib__color_sea_green();
    return __skadapter__to_color(__skreturn);
}
color color_sea_shell() {
    __sklib_color __skreturn = __sklib__color_sea_shell();
    return __skadapter__to_color(__skreturn);
}
color color_sienna() {
    __sklib_color __skreturn = __sklib__color_sienna();
    return __skadapter__to_color(__skreturn);
}
color color_silver() {
    __sklib_color __skreturn = __sklib__color_silver();
    return __skadapter__to_color(__skreturn);
}
color color_sky_blue() {
    __sklib_color __skreturn = __sklib__color_sky_blue();
    return __skadapter__to_color(__skreturn);
}
color color_slate_blue() {
    __sklib_color __skreturn = __sklib__color_slate_blue();
    return __skadapter__to_color(__skreturn);
}
color color_slate_gray() {
    __sklib_color __skreturn = __sklib__color_slate_gray();
    return __skadapter__to_color(__skreturn);
}
color color_snow() {
    __sklib_color __skreturn = __sklib__color_snow();
    return __skadapter__to_color(__skreturn);
}
color color_spring_green() {
    __sklib_color __skreturn = __sklib__color_spring_green();
    return __skadapter__to_color(__skreturn);
}
color color_steel_blue() {
    __sklib_color __skreturn = __sklib__color_steel_blue();
    return __skadapter__to_color(__skreturn);
}
color color_swinburne_red() {
    __sklib_color __skreturn = __sklib__color_swinburne_red();
    return __skadapter__to_color(__skreturn);
}
color color_tan() {
    __sklib_color __skreturn = __sklib__color_tan();
    return __skadapter__to_color(__skreturn);
}
color color_teal() {
    __sklib_color __skreturn = __sklib__color_teal();
    return __skadapter__to_color(__skreturn);
}
color color_thistle() {
    __sklib_color __skreturn = __sklib__color_thistle();
    return __skadapter__to_color(__skreturn);
}
string color_to_string(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    __sklib_string __skreturn = __sklib__color_to_string__color(__skparam__c);
    return __skadapter__to_string(__skreturn);
}
color color_tomato() {
    __sklib_color __skreturn = __sklib__color_tomato();
    return __skadapter__to_color(__skreturn);
}
color color_transparent() {
    __sklib_color __skreturn = __sklib__color_transparent();
    return __skadapter__to_color(__skreturn);
}
color color_turquoise() {
    __sklib_color __skreturn = __sklib__color_turquoise();
    return __skadapter__to_color(__skreturn);
}
color color_violet() {
    __sklib_color __skreturn = __sklib__color_violet();
    return __skadapter__to_color(__skreturn);
}
color color_wheat() {
    __sklib_color __skreturn = __sklib__color_wheat();
    return __skadapter__to_color(__skreturn);
}
color color_white() {
    __sklib_color __skreturn = __sklib__color_white();
    return __skadapter__to_color(__skreturn);
}
color color_white_smoke() {
    __sklib_color __skreturn = __sklib__color_white_smoke();
    return __skadapter__to_color(__skreturn);
}
color color_yellow() {
    __sklib_color __skreturn = __sklib__color_yellow();
    return __skadapter__to_color(__skreturn);
}
color color_yellow_green() {
    __sklib_color __skreturn = __sklib__color_yellow_green();
    return __skadapter__to_color(__skreturn);
}
int green_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    int __skreturn = __sklib__green_of__color(__skparam__c);
    return __skadapter__to_int(__skreturn);
}
color hsb_color(float hue, float saturation, float brightness) {
    float __skparam__hue = __skadapter__to_float(hue);
    float __skparam__saturation = __skadapter__to_float(saturation);
    float __skparam__brightness = __skadapter__to_float(brightness);
    __sklib_color __skreturn = __sklib__hsb_color__float__float__float(__skparam__hue, __skparam__saturation, __skparam__brightness);
    return __skadapter__to_color(__skreturn);
}
float hue_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    float __skreturn = __sklib__hue_of__color(__skparam__c);
    return __skadapter__to_float(__skreturn);
}
color random_color() {
    __sklib_color __skreturn = __sklib__random_color();
    return __skadapter__to_color(__skreturn);
}
color random_rgb_color(int alpha) {
    int __skparam__alpha = __skadapter__to_int(alpha);
    __sklib_color __skreturn = __sklib__random_rgb_color__int(__skparam__alpha);
    return __skadapter__to_color(__skreturn);
}
int red_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    int __skreturn = __sklib__red_of__color(__skparam__c);
    return __skadapter__to_int(__skreturn);
}
color rgb_color(float red, float green, float blue) {
    float __skparam__red = __skadapter__to_float(red);
    float __skparam__green = __skadapter__to_float(green);
    float __skparam__blue = __skadapter__to_float(blue);
    __sklib_color __skreturn = __sklib__rgb_color__float__float__float(__skparam__red, __skparam__green, __skparam__blue);
    return __skadapter__to_color(__skreturn);
}
color rgb_color(int red, int green, int blue) {
    int __skparam__red = __skadapter__to_int(red);
    int __skparam__green = __skadapter__to_int(green);
    int __skparam__blue = __skadapter__to_int(blue);
    __sklib_color __skreturn = __sklib__rgb_color__int__int__int(__skparam__red, __skparam__green, __skparam__blue);
    return __skadapter__to_color(__skreturn);
}
color rgba_color(float red, float green, float blue, float alpha) {
    float __skparam__red = __skadapter__to_float(red);
    float __skparam__green = __skadapter__to_float(green);
    float __skparam__blue = __skadapter__to_float(blue);
    float __skparam__alpha = __skadapter__to_float(alpha);
    __sklib_color __skreturn = __sklib__rgba_color__float__float__float__float(__skparam__red, __skparam__green, __skparam__blue, __skparam__alpha);
    return __skadapter__to_color(__skreturn);
}
color rgba_color(int red, int green, int blue, int alpha) {
    int __skparam__red = __skadapter__to_int(red);
    int __skparam__green = __skadapter__to_int(green);
    int __skparam__blue = __skadapter__to_int(blue);
    int __skparam__alpha = __skadapter__to_int(alpha);
    __sklib_color __skreturn = __sklib__rgba_color__int__int__int__int(__skparam__red, __skparam__green, __skparam__blue, __skparam__alpha);
    return __skadapter__to_color(__skreturn);
}
float saturation_of(color c) {
    __sklib_color __skparam__c = __skadapter__to_sklib_color(c);
    float __skreturn = __sklib__saturation_of__color(__skparam__c);
    return __skadapter__to_float(__skreturn);
}
color string_to_color(string str) {
    __sklib_string __skparam__str = __skadapter__to_sklib_string(str);
    __sklib_color __skreturn = __sklib__string_to_color__string(__skparam__str);
    __skadapter__free__sklib_string(__skparam__str);
    return __skadapter__to_color(__skreturn);
}
database database_named(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_database __skreturn = __sklib__database_named__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_database(__skreturn);
}
void free_all_databases() {
    __sklib__free_all_databases();
}
void free_all_query_results() {
    __sklib__free_all_query_results();
}
void free_database(database db_to_close) {
    __sklib_database __skparam__db_to_close = __skadapter__to_sklib_database(db_to_close);
    __sklib__free_database__database(__skparam__db_to_close);
}
void free_database(string name_of_db_to_close) {
    __sklib_string __skparam__name_of_db_to_close = __skadapter__to_sklib_string(name_of_db_to_close);
    __sklib__free_database__string(__skparam__name_of_db_to_close);
    __skadapter__free__sklib_string(__skparam__name_of_db_to_close);
}
void free_query_result(query_result query) {
    __sklib_query_result __skparam__query = __skadapter__to_sklib_query_result(query);
    __sklib__free_query_result__query_result(__skparam__query);
}
bool get_next_row(query_result db_result) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skreturn = __sklib__get_next_row__query_result(__skparam__db_result);
    return __skadapter__to_bool(__skreturn);
}
bool has_database(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_database__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool has_row(query_result db_result) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skreturn = __sklib__has_row__query_result(__skparam__db_result);
    return __skadapter__to_bool(__skreturn);
}
database open_database(string name, string filename) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_database __skreturn = __sklib__open_database__string__string(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_database(__skreturn);
}
bool query_column_for_bool(query_result db_result, int col) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skparam__col = __skadapter__to_int(col);
    int __skreturn = __sklib__query_column_for_bool__query_result__int(__skparam__db_result, __skparam__col);
    return __skadapter__to_bool(__skreturn);
}
double query_column_for_double(query_result db_result, int col) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skparam__col = __skadapter__to_int(col);
    double __skreturn = __sklib__query_column_for_double__query_result__int(__skparam__db_result, __skparam__col);
    return __skadapter__to_double(__skreturn);
}
int query_column_for_int(query_result db_result, int col) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skparam__col = __skadapter__to_int(col);
    int __skreturn = __sklib__query_column_for_int__query_result__int(__skparam__db_result, __skparam__col);
    return __skadapter__to_int(__skreturn);
}
string query_column_for_string(query_result db_result, int col) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skparam__col = __skadapter__to_int(col);
    __sklib_string __skreturn = __sklib__query_column_for_string__query_result__int(__skparam__db_result, __skparam__col);
    return __skadapter__to_string(__skreturn);
}
bool query_success(query_result db_result) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skreturn = __sklib__query_success__query_result(__skparam__db_result);
    return __skadapter__to_bool(__skreturn);
}
string query_type_of_col(query_result db_result, int col) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    int __skparam__col = __skadapter__to_int(col);
    __sklib_string __skreturn = __sklib__query_type_of_col__query_result__int(__skparam__db_result, __skparam__col);
    return __skadapter__to_string(__skreturn);
}
void reset_query_result(query_result db_result) {
    __sklib_query_result __skparam__db_result = __skadapter__to_sklib_query_result(db_result);
    __sklib__reset_query_result__query_result(__skparam__db_result);
}
int rows_changed(database db) {
    __sklib_database __skparam__db = __skadapter__to_sklib_database(db);
    int __skreturn = __sklib__rows_changed__database(__skparam__db);
    return __skadapter__to_int(__skreturn);
}
query_result run_sql(database db, string sql) {
    __sklib_database __skparam__db = __skadapter__to_sklib_database(db);
    __sklib_string __skparam__sql = __skadapter__to_sklib_string(sql);
    __sklib_query_result __skreturn = __sklib__run_sql__database__string(__skparam__db, __skparam__sql);
    __skadapter__free__sklib_string(__skparam__sql);
    return __skadapter__to_query_result(__skreturn);
}
query_result run_sql(string database_name, string sql) {
    __sklib_string __skparam__database_name = __skadapter__to_sklib_string(database_name);
    __sklib_string __skparam__sql = __skadapter__to_sklib_string(sql);
    __sklib_query_result __skreturn = __sklib__run_sql__string__string(__skparam__database_name, __skparam__sql);
    __skadapter__free__sklib_string(__skparam__database_name);
    __skadapter__free__sklib_string(__skparam__sql);
    return __skadapter__to_query_result(__skreturn);
}
drawing_options option_defaults() {
    __sklib_drawing_options __skreturn = __sklib__option_defaults();
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_draw_to(bitmap dest) {
    __sklib_bitmap __skparam__dest = __skadapter__to_sklib_bitmap(dest);
    __sklib_drawing_options __skreturn = __sklib__option_draw_to__bitmap(__skparam__dest);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_draw_to(bitmap dest, drawing_options opts) {
    __sklib_bitmap __skparam__dest = __skadapter__to_sklib_bitmap(dest);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_draw_to__bitmap__drawing_options(__skparam__dest, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_draw_to(window dest) {
    __sklib_window __skparam__dest = __skadapter__to_sklib_window(dest);
    __sklib_drawing_options __skreturn = __sklib__option_draw_to__window(__skparam__dest);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_draw_to(window dest, drawing_options opts) {
    __sklib_window __skparam__dest = __skadapter__to_sklib_window(dest);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_draw_to__window__drawing_options(__skparam__dest, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_flip_x() {
    __sklib_drawing_options __skreturn = __sklib__option_flip_x();
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_flip_x(drawing_options opts) {
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_flip_x__drawing_options(__skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_flip_xy() {
    __sklib_drawing_options __skreturn = __sklib__option_flip_xy();
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_flip_xy(drawing_options opts) {
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_flip_xy__drawing_options(__skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_flip_y() {
    __sklib_drawing_options __skreturn = __sklib__option_flip_y();
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_flip_y(drawing_options opts) {
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_flip_y__drawing_options(__skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_line_width(int width) {
    int __skparam__width = __skadapter__to_int(width);
    __sklib_drawing_options __skreturn = __sklib__option_line_width__int(__skparam__width);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_line_width(int width, drawing_options opts) {
    int __skparam__width = __skadapter__to_int(width);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_line_width__int__drawing_options(__skparam__width, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_part_bmp(float x, float y, float w, float h) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__w = __skadapter__to_float(w);
    float __skparam__h = __skadapter__to_float(h);
    __sklib_drawing_options __skreturn = __sklib__option_part_bmp__float__float__float__float(__skparam__x, __skparam__y, __skparam__w, __skparam__h);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_part_bmp(float x, float y, float w, float h, drawing_options opts) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__w = __skadapter__to_float(w);
    float __skparam__h = __skadapter__to_float(h);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_part_bmp__float__float__float__float__drawing_options(__skparam__x, __skparam__y, __skparam__w, __skparam__h, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_part_bmp(rectangle part) {
    __sklib_rectangle __skparam__part = __skadapter__to_sklib_rectangle(part);
    __sklib_drawing_options __skreturn = __sklib__option_part_bmp__rectangle(__skparam__part);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_part_bmp(rectangle part, drawing_options opts) {
    __sklib_rectangle __skparam__part = __skadapter__to_sklib_rectangle(part);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_part_bmp__rectangle__drawing_options(__skparam__part, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_rotate_bmp(float angle) {
    float __skparam__angle = __skadapter__to_float(angle);
    __sklib_drawing_options __skreturn = __sklib__option_rotate_bmp__float(__skparam__angle);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_rotate_bmp(float angle, drawing_options opts) {
    float __skparam__angle = __skadapter__to_float(angle);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_rotate_bmp__float__drawing_options(__skparam__angle, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_rotate_bmp(float angle, float anchor_x, float anchor_y) {
    float __skparam__angle = __skadapter__to_float(angle);
    float __skparam__anchor_x = __skadapter__to_float(anchor_x);
    float __skparam__anchor_y = __skadapter__to_float(anchor_y);
    __sklib_drawing_options __skreturn = __sklib__option_rotate_bmp__float__float__float(__skparam__angle, __skparam__anchor_x, __skparam__anchor_y);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_rotate_bmp(float angle, float anchor_x, float anchor_y, drawing_options opts) {
    float __skparam__angle = __skadapter__to_float(angle);
    float __skparam__anchor_x = __skadapter__to_float(anchor_x);
    float __skparam__anchor_y = __skadapter__to_float(anchor_y);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_rotate_bmp__float__float__float__drawing_options(__skparam__angle, __skparam__anchor_x, __skparam__anchor_y, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_scale_bmp(float scale_x, float scale_y) {
    float __skparam__scale_x = __skadapter__to_float(scale_x);
    float __skparam__scale_y = __skadapter__to_float(scale_y);
    __sklib_drawing_options __skreturn = __sklib__option_scale_bmp__float__float(__skparam__scale_x, __skparam__scale_y);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_scale_bmp(float scale_x, float scale_y, drawing_options opts) {
    float __skparam__scale_x = __skadapter__to_float(scale_x);
    float __skparam__scale_y = __skadapter__to_float(scale_y);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_scale_bmp__float__float__drawing_options(__skparam__scale_x, __skparam__scale_y, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_to_screen() {
    __sklib_drawing_options __skreturn = __sklib__option_to_screen();
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_to_screen(drawing_options opts) {
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_to_screen__drawing_options(__skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_to_world() {
    __sklib_drawing_options __skreturn = __sklib__option_to_world();
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_to_world(drawing_options opts) {
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_to_world__drawing_options(__skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_with_animation(animation anim) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_drawing_options __skreturn = __sklib__option_with_animation__animation(__skparam__anim);
    return __skadapter__to_drawing_options(__skreturn);
}
drawing_options option_with_animation(animation anim, drawing_options opts) {
    __sklib_animation __skparam__anim = __skadapter__to_sklib_animation(anim);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib_drawing_options __skreturn = __sklib__option_with_animation__animation__drawing_options(__skparam__anim, __skparam__opts);
    return __skadapter__to_drawing_options(__skreturn);
}
void draw_ellipse(color clr, const rectangle rect) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib__draw_ellipse__color__rectangle(__skparam__clr, __skparam__rect);
}
void draw_ellipse(color clr, const rectangle rect, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_ellipse__color__rectangle__drawing_options(__skparam__clr, __skparam__rect, __skparam__opts);
}
void draw_ellipse(color clr, float x, float y, float width, float height) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib__draw_ellipse__color__float__float__float__float(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height);
}
void draw_ellipse(color clr, float x, float y, float width, float height, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_ellipse__color__float__float__float__float__drawing_options(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height, __skparam__opts);
}
void fill_ellipse(color clr, const rectangle rect) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib__fill_ellipse__color__rectangle(__skparam__clr, __skparam__rect);
}
void fill_ellipse(color clr, const rectangle rect, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_ellipse__color__rectangle__drawing_options(__skparam__clr, __skparam__rect, __skparam__opts);
}
void fill_ellipse(color clr, float x, float y, float width, float height) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib__fill_ellipse__color__float__float__float__float(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height);
}
void fill_ellipse(color clr, float x, float y, float width, float height, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_ellipse__color__float__float__float__float__drawing_options(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height, __skparam__opts);
}
float cosine(float degrees) {
    float __skparam__degrees = __skadapter__to_float(degrees);
    float __skreturn = __sklib__cosine__float(__skparam__degrees);
    return __skadapter__to_float(__skreturn);
}
float sine(float degrees) {
    float __skparam__degrees = __skadapter__to_float(degrees);
    float __skreturn = __sklib__sine__float(__skparam__degrees);
    return __skadapter__to_float(__skreturn);
}
float tangent(float degrees) {
    float __skparam__degrees = __skadapter__to_float(degrees);
    float __skreturn = __sklib__tangent__float(__skparam__degrees);
    return __skadapter__to_float(__skreturn);
}
void clear_screen() {
    __sklib__clear_screen();
}
void clear_screen(color clr) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib__clear_screen__color(__skparam__clr);
}
display display_details(unsigned int index) {
    unsigned int __skparam__index = __skadapter__to_unsigned_int(index);
    __sklib_display __skreturn = __sklib__display_details__unsigned_int(__skparam__index);
    return __skadapter__to_display(__skreturn);
}
int display_height(display disp) {
    __sklib_display __skparam__disp = __skadapter__to_sklib_display(disp);
    int __skreturn = __sklib__display_height__display(__skparam__disp);
    return __skadapter__to_int(__skreturn);
}
string display_name(display disp) {
    __sklib_display __skparam__disp = __skadapter__to_sklib_display(disp);
    __sklib_string __skreturn = __sklib__display_name__display(__skparam__disp);
    return __skadapter__to_string(__skreturn);
}
int display_width(display disp) {
    __sklib_display __skparam__disp = __skadapter__to_sklib_display(disp);
    int __skreturn = __sklib__display_width__display(__skparam__disp);
    return __skadapter__to_int(__skreturn);
}
int display_x(display disp) {
    __sklib_display __skparam__disp = __skadapter__to_sklib_display(disp);
    int __skreturn = __sklib__display_x__display(__skparam__disp);
    return __skadapter__to_int(__skreturn);
}
int display_y(display disp) {
    __sklib_display __skparam__disp = __skadapter__to_sklib_display(disp);
    int __skreturn = __sklib__display_y__display(__skparam__disp);
    return __skadapter__to_int(__skreturn);
}
int number_of_displays() {
    int __skreturn = __sklib__number_of_displays();
    return __skadapter__to_int(__skreturn);
}
void refresh_screen() {
    __sklib__refresh_screen();
}
void refresh_screen(unsigned int target_fps) {
    unsigned int __skparam__target_fps = __skadapter__to_unsigned_int(target_fps);
    __sklib__refresh_screen__unsigned_int(__skparam__target_fps);
}
void save_bitmap(bitmap bmp, const string &basename) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_string __skparam__basename = __skadapter__to_sklib_string(basename);
    __sklib__save_bitmap__bitmap__string_ref(__skparam__bmp, __skparam__basename);
    __skadapter__free__sklib_string(__skparam__basename);
}
int screen_height() {
    int __skreturn = __sklib__screen_height();
    return __skadapter__to_int(__skreturn);
}
int screen_width() {
    int __skreturn = __sklib__screen_width();
    return __skadapter__to_int(__skreturn);
}
void take_screenshot(const string &basename) {
    const __sklib_string __skparam__basename = __skadapter__to_sklib_string(basename);
    __sklib__take_screenshot__string_ref(__skparam__basename);
    __skadapter__free__sklib_string(__skparam__basename);
}
void take_screenshot(window wind, const string &basename) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    const __sklib_string __skparam__basename = __skadapter__to_sklib_string(basename);
    __sklib__take_screenshot__window__string_ref(__skparam__wind, __skparam__basename);
    __skadapter__free__sklib_string(__skparam__basename);
}
point_2d bitmap_cell_center(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_point_2d __skreturn = __sklib__bitmap_cell_center__bitmap(__skparam__bmp);
    return __skadapter__to_point_2d(__skreturn);
}
circle bitmap_cell_circle(bitmap bmp, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_circle __skreturn = __sklib__bitmap_cell_circle__bitmap__float__float(__skparam__bmp, __skparam__x, __skparam__y);
    return __skadapter__to_circle(__skreturn);
}
circle bitmap_cell_circle(bitmap bmp, const point_2d pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_circle __skreturn = __sklib__bitmap_cell_circle__bitmap__point_2d(__skparam__bmp, __skparam__pt);
    return __skadapter__to_circle(__skreturn);
}
circle bitmap_cell_circle(bitmap bmp, const point_2d pt, float scale) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    float __skparam__scale = __skadapter__to_float(scale);
    __sklib_circle __skreturn = __sklib__bitmap_cell_circle__bitmap__point_2d__float(__skparam__bmp, __skparam__pt, __skparam__scale);
    return __skadapter__to_circle(__skreturn);
}
int bitmap_cell_columns(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_cell_columns__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
int bitmap_cell_count(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_cell_count__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
int bitmap_cell_height(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_cell_height__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
vector_2d bitmap_cell_offset(bitmap src, int cell) {
    __sklib_bitmap __skparam__src = __skadapter__to_sklib_bitmap(src);
    int __skparam__cell = __skadapter__to_int(cell);
    __sklib_vector_2d __skreturn = __sklib__bitmap_cell_offset__bitmap__int(__skparam__src, __skparam__cell);
    return __skadapter__to_vector_2d(__skreturn);
}
rectangle bitmap_cell_rectangle(bitmap src) {
    __sklib_bitmap __skparam__src = __skadapter__to_sklib_bitmap(src);
    __sklib_rectangle __skreturn = __sklib__bitmap_cell_rectangle__bitmap(__skparam__src);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle bitmap_cell_rectangle(bitmap src, const point_2d &pt) {
    __sklib_bitmap __skparam__src = __skadapter__to_sklib_bitmap(src);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_rectangle __skreturn = __sklib__bitmap_cell_rectangle__bitmap__point_2d_ref(__skparam__src, __skparam__pt);
    return __skadapter__to_rectangle(__skreturn);
}
int bitmap_cell_rows(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_cell_rows__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
int bitmap_cell_width(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_cell_width__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
point_2d bitmap_center(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_point_2d __skreturn = __sklib__bitmap_center__bitmap(__skparam__bmp);
    return __skadapter__to_point_2d(__skreturn);
}
circle bitmap_circle(bitmap bmp, const point_2d &pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_circle __skreturn = __sklib__bitmap_circle__bitmap__point_2d_ref(__skparam__bmp, __skparam__pt);
    return __skadapter__to_circle(__skreturn);
}
string bitmap_filename(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_string __skreturn = __sklib__bitmap_filename__bitmap(__skparam__bmp);
    return __skadapter__to_string(__skreturn);
}
int bitmap_height(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_height__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
int bitmap_height(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__bitmap_height__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
string bitmap_name(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_string __skreturn = __sklib__bitmap_name__bitmap(__skparam__bmp);
    return __skadapter__to_string(__skreturn);
}
bitmap bitmap_named(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_bitmap __skreturn = __sklib__bitmap_named__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bitmap(__skreturn);
}
rectangle bitmap_rectangle(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_rectangle __skreturn = __sklib__bitmap_rectangle__bitmap(__skparam__bmp);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle bitmap_rectangle(bitmap bmp, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_rectangle __skreturn = __sklib__bitmap_rectangle__bitmap__float__float(__skparam__bmp, __skparam__x, __skparam__y);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle bitmap_rectangle_of_cell(bitmap src, int cell) {
    __sklib_bitmap __skparam__src = __skadapter__to_sklib_bitmap(src);
    int __skparam__cell = __skadapter__to_int(cell);
    __sklib_rectangle __skreturn = __sklib__bitmap_rectangle_of_cell__bitmap__int(__skparam__src, __skparam__cell);
    return __skadapter__to_rectangle(__skreturn);
}
void bitmap_set_cell_details(bitmap bmp, int width, int height, int columns, int rows, int count) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__width = __skadapter__to_int(width);
    int __skparam__height = __skadapter__to_int(height);
    int __skparam__columns = __skadapter__to_int(columns);
    int __skparam__rows = __skadapter__to_int(rows);
    int __skparam__count = __skadapter__to_int(count);
    __sklib__bitmap_set_cell_details__bitmap__int__int__int__int__int(__skparam__bmp, __skparam__width, __skparam__height, __skparam__columns, __skparam__rows, __skparam__count);
}
int bitmap_width(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skreturn = __sklib__bitmap_width__bitmap(__skparam__bmp);
    return __skadapter__to_int(__skreturn);
}
int bitmap_width(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__bitmap_width__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
void clear_bitmap(bitmap bmp, color clr) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib__clear_bitmap__bitmap__color(__skparam__bmp, __skparam__clr);
}
void clear_bitmap(string name, color clr) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib__clear_bitmap__string__color(__skparam__name, __skparam__clr);
    __skadapter__free__sklib_string(__skparam__name);
}
bitmap create_bitmap(string name, int width, int height) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__width = __skadapter__to_int(width);
    int __skparam__height = __skadapter__to_int(height);
    __sklib_bitmap __skreturn = __sklib__create_bitmap__string__int__int(__skparam__name, __skparam__width, __skparam__height);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bitmap(__skreturn);
}
void draw_bitmap(bitmap bmp, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__draw_bitmap__bitmap__float__float(__skparam__bmp, __skparam__x, __skparam__y);
}
void draw_bitmap(bitmap bmp, float x, float y, drawing_options opts) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_bitmap__bitmap__float__float__drawing_options(__skparam__bmp, __skparam__x, __skparam__y, __skparam__opts);
}
void draw_bitmap(string name, float x, float y) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__draw_bitmap__string__float__float(__skparam__name, __skparam__x, __skparam__y);
    __skadapter__free__sklib_string(__skparam__name);
}
void draw_bitmap(string name, float x, float y, drawing_options opts) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_bitmap__string__float__float__drawing_options(__skparam__name, __skparam__x, __skparam__y, __skparam__opts);
    __skadapter__free__sklib_string(__skparam__name);
}
void free_all_bitmaps() {
    __sklib__free_all_bitmaps();
}
void free_bitmap(bitmap to_delete) {
    __sklib_bitmap __skparam__to_delete = __skadapter__to_sklib_bitmap(to_delete);
    __sklib__free_bitmap__bitmap(__skparam__to_delete);
}
bool has_bitmap(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_bitmap__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bitmap load_bitmap(string name, string filename) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_bitmap __skreturn = __sklib__load_bitmap__string__string(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_bitmap(__skreturn);
}
bool pixel_drawn_at_point(bitmap bmp, const point_2d &pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__pixel_drawn_at_point__bitmap__point_2d_ref(__skparam__bmp, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool pixel_drawn_at_point(bitmap bmp, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    int __skreturn = __sklib__pixel_drawn_at_point__bitmap__float__float(__skparam__bmp, __skparam__x, __skparam__y);
    return __skadapter__to_bool(__skreturn);
}
bool pixel_drawn_at_point(bitmap bmp, int cell, const point_2d &pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__pixel_drawn_at_point__bitmap__int__point_2d_ref(__skparam__bmp, __skparam__cell, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool pixel_drawn_at_point(bitmap bmp, int cell, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    int __skparam__cell = __skadapter__to_int(cell);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    int __skreturn = __sklib__pixel_drawn_at_point__bitmap__int__float__float(__skparam__bmp, __skparam__cell, __skparam__x, __skparam__y);
    return __skadapter__to_bool(__skreturn);
}
void process_events() {
    __sklib__process_events();
}
bool quit_requested() {
    int __skreturn = __sklib__quit_requested();
    return __skadapter__to_bool(__skreturn);
}
void reset_quit() {
    __sklib__reset_quit();
}
json create_json() {
    __sklib_json __skreturn = __sklib__create_json();
    return __skadapter__to_json(__skreturn);
}
json create_json(string json_string) {
    __sklib_string __skparam__json_string = __skadapter__to_sklib_string(json_string);
    __sklib_json __skreturn = __sklib__create_json__string(__skparam__json_string);
    __skadapter__free__sklib_string(__skparam__json_string);
    return __skadapter__to_json(__skreturn);
}
void free_all_json() {
    __sklib__free_all_json();
}
void free_json(json j) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib__free_json__json(__skparam__j);
}
int json_count_keys(json j) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    int __skreturn = __sklib__json_count_keys__json(__skparam__j);
    return __skadapter__to_int(__skreturn);
}
json json_from_color(color clr) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib_json __skreturn = __sklib__json_from_color__color(__skparam__clr);
    return __skadapter__to_json(__skreturn);
}
json json_from_file(const string &filename) {
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_json __skreturn = __sklib__json_from_file__string_ref(__skparam__filename);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_json(__skreturn);
}
json json_from_string(const string &j_string) {
    const __sklib_string __skparam__j_string = __skadapter__to_sklib_string(j_string);
    __sklib_json __skreturn = __sklib__json_from_string__string_ref(__skparam__j_string);
    __skadapter__free__sklib_string(__skparam__j_string);
    return __skadapter__to_json(__skreturn);
}
bool json_has_key(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    int __skreturn = __sklib__json_has_key__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_bool(__skreturn);
}
void json_read_array(json j, string key, vector<double> &out_result) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_double __skparam__out_result = __skadapter__to_sklib_vector_double(out_result);
    __sklib__json_read_array__json__string__vector_double_ref(__skparam__j, __skparam__key, &__skparam__out_result);
    __skadapter__update_from_vector_double(__skparam__out_result, out_result);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_double(__skparam__out_result);
}
void json_read_array(json j, string key, vector<json> &out_result) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_json __skparam__out_result = __skadapter__to_sklib_vector_json(out_result);
    __sklib__json_read_array__json__string__vector_json_ref(__skparam__j, __skparam__key, &__skparam__out_result);
    __skadapter__update_from_vector_json(__skparam__out_result, out_result);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_json(__skparam__out_result);
}
void json_read_array(json j, string key, vector<string> &out_result) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_string __skparam__out_result = __skadapter__to_sklib_vector_string(out_result);
    __sklib__json_read_array__json__string__vector_string_ref(__skparam__j, __skparam__key, &__skparam__out_result);
    __skadapter__update_from_vector_string(__skparam__out_result, out_result);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_string(__skparam__out_result);
}
void json_read_array(json j, string key, vector<bool> &out_result) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_bool __skparam__out_result = __skadapter__to_sklib_vector_bool(out_result);
    __sklib__json_read_array__json__string__vector_bool_ref(__skparam__j, __skparam__key, &__skparam__out_result);
    __skadapter__update_from_vector_bool(__skparam__out_result, out_result);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_bool(__skparam__out_result);
}
bool json_read_bool(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    int __skreturn = __sklib__json_read_bool__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_bool(__skreturn);
}
float json_read_number(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    float __skreturn = __sklib__json_read_number__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_float(__skreturn);
}
double json_read_number_as_double(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    double __skreturn = __sklib__json_read_number_as_double__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_double(__skreturn);
}
int json_read_number_as_int(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    int __skreturn = __sklib__json_read_number_as_int__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_int(__skreturn);
}
json json_read_object(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_json __skreturn = __sklib__json_read_object__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_json(__skreturn);
}
string json_read_string(json j, string key) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_string __skreturn = __sklib__json_read_string__json__string(__skparam__j, __skparam__key);
    __skadapter__free__sklib_string(__skparam__key);
    return __skadapter__to_string(__skreturn);
}
void json_set_array(json j, string key, vector<string> value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_string __skparam__value = __skadapter__to_sklib_vector_string(value);
    __sklib__json_set_array__json__string__vector_string(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_string(__skparam__value);
}
void json_set_array(json j, string key, vector<double> value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_double __skparam__value = __skadapter__to_sklib_vector_double(value);
    __sklib__json_set_array__json__string__vector_double(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_double(__skparam__value);
}
void json_set_array(json j, string key, vector<bool> value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_bool __skparam__value = __skadapter__to_sklib_vector_bool(value);
    __sklib__json_set_array__json__string__vector_bool(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_bool(__skparam__value);
}
void json_set_array(json j, string key, vector<json> value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_vector_json __skparam__value = __skadapter__to_sklib_vector_json(value);
    __sklib__json_set_array__json__string__vector_json(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_vector_json(__skparam__value);
}
void json_set_bool(json j, string key, bool value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    int __skparam__value = __skadapter__to_int(value);
    __sklib__json_set_bool__json__string__bool(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
}
void json_set_number(json j, string key, int value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    int __skparam__value = __skadapter__to_int(value);
    __sklib__json_set_number__json__string__int(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
}
void json_set_number(json j, string key, double value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    double __skparam__value = __skadapter__to_double(value);
    __sklib__json_set_number__json__string__double(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
}
void json_set_number(json j, string key, float value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__json_set_number__json__string__float(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
}
void json_set_object(json j, string key, json obj) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_json __skparam__obj = __skadapter__to_sklib_json(obj);
    __sklib__json_set_object__json__string__json(__skparam__j, __skparam__key, __skparam__obj);
    __skadapter__free__sklib_string(__skparam__key);
}
void json_set_string(json j, string key, string value) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skparam__key = __skadapter__to_sklib_string(key);
    __sklib_string __skparam__value = __skadapter__to_sklib_string(value);
    __sklib__json_set_string__json__string__string(__skparam__j, __skparam__key, __skparam__value);
    __skadapter__free__sklib_string(__skparam__key);
    __skadapter__free__sklib_string(__skparam__value);
}
color json_to_color(json j) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_color __skreturn = __sklib__json_to_color__json(__skparam__j);
    return __skadapter__to_color(__skreturn);
}
void json_to_file(json j, const string &filename) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib__json_to_file__json__string_ref(__skparam__j, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__filename);
}
string json_to_string(json j) {
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib_string __skreturn = __sklib__json_to_string__json(__skparam__j);
    return __skadapter__to_string(__skreturn);
}
bool any_key_pressed() {
    int __skreturn = __sklib__any_key_pressed();
    return __skadapter__to_bool(__skreturn);
}
void deregister_callback_on_key_down(key_callback *callback) {
    __sklib_key_callback *__skparam__callback = callback;
    __sklib__deregister_callback_on_key_down__key_callback_ptr(__skparam__callback);
}
void deregister_callback_on_key_typed(key_callback *callback) {
    __sklib_key_callback *__skparam__callback = callback;
    __sklib__deregister_callback_on_key_typed__key_callback_ptr(__skparam__callback);
}
void deregister_callback_on_key_up(key_callback *callback) {
    __sklib_key_callback *__skparam__callback = callback;
    __sklib__deregister_callback_on_key_up__key_callback_ptr(__skparam__callback);
}
bool key_down(key_code key) {
    int __skparam__key = __skadapter__to_int(key);
    int __skreturn = __sklib__key_down__key_code(__skparam__key);
    return __skadapter__to_bool(__skreturn);
}
string key_name(key_code key) {
    int __skparam__key = __skadapter__to_int(key);
    __sklib_string __skreturn = __sklib__key_name__key_code(__skparam__key);
    return __skadapter__to_string(__skreturn);
}
bool key_released(key_code key) {
    int __skparam__key = __skadapter__to_int(key);
    int __skreturn = __sklib__key_released__key_code(__skparam__key);
    return __skadapter__to_bool(__skreturn);
}
bool key_typed(key_code key) {
    int __skparam__key = __skadapter__to_int(key);
    int __skreturn = __sklib__key_typed__key_code(__skparam__key);
    return __skadapter__to_bool(__skreturn);
}
bool key_up(key_code key) {
    int __skparam__key = __skadapter__to_int(key);
    int __skreturn = __sklib__key_up__key_code(__skparam__key);
    return __skadapter__to_bool(__skreturn);
}
void register_callback_on_key_down(key_callback *callback) {
    __sklib_key_callback *__skparam__callback = callback;
    __sklib__register_callback_on_key_down__key_callback_ptr(__skparam__callback);
}
void register_callback_on_key_typed(key_callback *callback) {
    __sklib_key_callback *__skparam__callback = callback;
    __sklib__register_callback_on_key_typed__key_callback_ptr(__skparam__callback);
}
void register_callback_on_key_up(key_callback *callback) {
    __sklib_key_callback *__skparam__callback = callback;
    __sklib__register_callback_on_key_up__key_callback_ptr(__skparam__callback);
}
void draw_line(color clr, const line &l) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib__draw_line__color__line_ref(__skparam__clr, __skparam__l);
}
void draw_line(color clr, const line &l, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_line__color__line_ref__drawing_options(__skparam__clr, __skparam__l, __skparam__opts);
}
void draw_line(color clr, const point_2d &from_pt, const point_2d &to_pt) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_point_2d __skparam__to_pt = __skadapter__to_sklib_point_2d(to_pt);
    __sklib__draw_line__color__point_2d_ref__point_2d_ref(__skparam__clr, __skparam__from_pt, __skparam__to_pt);
}
void draw_line(color clr, const point_2d &from_pt, const point_2d &to_pt, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_point_2d __skparam__to_pt = __skadapter__to_sklib_point_2d(to_pt);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_line__color__point_2d_ref__point_2d_ref__drawing_options_ref(__skparam__clr, __skparam__from_pt, __skparam__to_pt, __skparam__opts);
}
void draw_line(color clr, float x1, float y1, float x2, float y2) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    __sklib__draw_line__color__float__float__float__float(__skparam__clr, __skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2);
}
void draw_line(color clr, float x1, float y1, float x2, float y2, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_line__color__float__float__float__float__drawing_options_ref(__skparam__clr, __skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2, __skparam__opts);
}
point_2d closest_point_on_line(const point_2d from_pt, const line &l) {
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_point_2d __skreturn = __sklib__closest_point_on_line__point_2d__line_ref(__skparam__from_pt, __skparam__l);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d closest_point_on_lines(const point_2d from_pt, const vector<line> &lines, int &line_idx) {
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_vector_line __skparam__lines = __skadapter__to_sklib_vector_line(lines);
    int __skparam__line_idx = __skadapter__to_int(line_idx);
    __sklib_point_2d __skreturn = __sklib__closest_point_on_lines__point_2d__vector_line_ref__int_ref(__skparam__from_pt, __skparam__lines, &__skparam__line_idx);
    line_idx = __skadapter__to_int(__skparam__line_idx);
    __skadapter__free__sklib_vector_line(__skparam__lines);
    return __skadapter__to_point_2d(__skreturn);
}
line line_from(const point_2d &start, const point_2d &end_pt) {
    const __sklib_point_2d __skparam__start = __skadapter__to_sklib_point_2d(start);
    const __sklib_point_2d __skparam__end_pt = __skadapter__to_sklib_point_2d(end_pt);
    __sklib_line __skreturn = __sklib__line_from__point_2d_ref__point_2d_ref(__skparam__start, __skparam__end_pt);
    return __skadapter__to_line(__skreturn);
}
line line_from(const point_2d &start, const vector_2d &offset) {
    const __sklib_point_2d __skparam__start = __skadapter__to_sklib_point_2d(start);
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib_line __skreturn = __sklib__line_from__point_2d_ref__vector_2d_ref(__skparam__start, __skparam__offset);
    return __skadapter__to_line(__skreturn);
}
line line_from(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    __sklib_line __skreturn = __sklib__line_from__vector_2d_ref(__skparam__v);
    return __skadapter__to_line(__skreturn);
}
line line_from(float x1, float y1, float x2, float y2) {
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    __sklib_line __skreturn = __sklib__line_from__float__float__float__float(__skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2);
    return __skadapter__to_line(__skreturn);
}
bool line_intersection_point(const line &line1, const line &line2, point_2d &pt) {
    const __sklib_line __skparam__line1 = __skadapter__to_sklib_line(line1);
    const __sklib_line __skparam__line2 = __skadapter__to_sklib_line(line2);
    __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__line_intersection_point__line_ref__line_ref__point_2d_ref(__skparam__line1, __skparam__line2, &__skparam__pt);
    pt = __skadapter__to_point_2d(__skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool line_intersects_circle(const line &l, const circle &c) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    int __skreturn = __sklib__line_intersects_circle__line_ref__circle_ref(__skparam__l, __skparam__c);
    return __skadapter__to_bool(__skreturn);
}
bool line_intersects_lines(const line &l, const vector<line> &lines) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    const __sklib_vector_line __skparam__lines = __skadapter__to_sklib_vector_line(lines);
    int __skreturn = __sklib__line_intersects_lines__line_ref__vector_line_ref(__skparam__l, __skparam__lines);
    __skadapter__free__sklib_vector_line(__skparam__lines);
    return __skadapter__to_bool(__skreturn);
}
bool line_intersects_rect(const line &l, const rectangle &rect) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__line_intersects_rect__line_ref__rectangle_ref(__skparam__l, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
float line_length(const line &l) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    float __skreturn = __sklib__line_length__line_ref(__skparam__l);
    return __skadapter__to_float(__skreturn);
}
float line_length_squared(const line &l) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    float __skreturn = __sklib__line_length_squared__line_ref(__skparam__l);
    return __skadapter__to_float(__skreturn);
}
point_2d line_mid_point(const line &l) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_point_2d __skreturn = __sklib__line_mid_point__line_ref(__skparam__l);
    return __skadapter__to_point_2d(__skreturn);
}
vector_2d line_normal(const line &l) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_vector_2d __skreturn = __sklib__line_normal__line_ref(__skparam__l);
    return __skadapter__to_vector_2d(__skreturn);
}
string line_to_string(const line &ln) {
    const __sklib_line __skparam__ln = __skadapter__to_sklib_line(ln);
    __sklib_string __skreturn = __sklib__line_to_string__line_ref(__skparam__ln);
    return __skadapter__to_string(__skreturn);
}
vector<line> lines_from(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_vector_line __skreturn = __sklib__lines_from__rectangle_ref(__skparam__rect);
    return __skadapter__to_vector_line(__skreturn);
}
vector<line> lines_from(const triangle &t) {
    const __sklib_triangle __skparam__t = __skadapter__to_sklib_triangle(t);
    __sklib_vector_line __skreturn = __sklib__lines_from__triangle_ref(__skparam__t);
    return __skadapter__to_vector_line(__skreturn);
}
bool lines_intersect(const line &l1, const line &l2) {
    const __sklib_line __skparam__l1 = __skadapter__to_sklib_line(l1);
    const __sklib_line __skparam__l2 = __skadapter__to_sklib_line(l2);
    int __skreturn = __sklib__lines_intersect__line_ref__line_ref(__skparam__l1, __skparam__l2);
    return __skadapter__to_bool(__skreturn);
}
void apply_matrix(const matrix_2d &matrix, quad &q) {
    const __sklib_matrix_2d __skparam__matrix = __skadapter__to_sklib_matrix_2d(matrix);
    __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    __sklib__apply_matrix__matrix_2d_ref__quad_ref(__skparam__matrix, &__skparam__q);
    q = __skadapter__to_quad(__skparam__q);
}
void apply_matrix(const matrix_2d &m, triangle &tri) {
    const __sklib_matrix_2d __skparam__m = __skadapter__to_sklib_matrix_2d(m);
    __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib__apply_matrix__matrix_2d_ref__triangle_ref(__skparam__m, &__skparam__tri);
    tri = __skadapter__to_triangle(__skparam__tri);
}
matrix_2d identity_matrix() {
    __sklib_matrix_2d __skreturn = __sklib__identity_matrix();
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d matrix_inverse(const matrix_2d &m) {
    const __sklib_matrix_2d __skparam__m = __skadapter__to_sklib_matrix_2d(m);
    __sklib_matrix_2d __skreturn = __sklib__matrix_inverse__matrix_2d_ref(__skparam__m);
    return __skadapter__to_matrix_2d(__skreturn);
}
point_2d matrix_multiply(const matrix_2d &m, const point_2d &pt) {
    const __sklib_matrix_2d __skparam__m = __skadapter__to_sklib_matrix_2d(m);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_point_2d __skreturn = __sklib__matrix_multiply__matrix_2d_ref__point_2d_ref(__skparam__m, __skparam__pt);
    return __skadapter__to_point_2d(__skreturn);
}
matrix_2d matrix_multiply(const matrix_2d &m1, const matrix_2d &m2) {
    const __sklib_matrix_2d __skparam__m1 = __skadapter__to_sklib_matrix_2d(m1);
    const __sklib_matrix_2d __skparam__m2 = __skadapter__to_sklib_matrix_2d(m2);
    __sklib_matrix_2d __skreturn = __sklib__matrix_multiply__matrix_2d_ref__matrix_2d_ref(__skparam__m1, __skparam__m2);
    return __skadapter__to_matrix_2d(__skreturn);
}
vector_2d matrix_multiply(const matrix_2d &m, const vector_2d &v) {
    const __sklib_matrix_2d __skparam__m = __skadapter__to_sklib_matrix_2d(m);
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    __sklib_vector_2d __skreturn = __sklib__matrix_multiply__matrix_2d_ref__vector_2d_ref(__skparam__m, __skparam__v);
    return __skadapter__to_vector_2d(__skreturn);
}
string matrix_to_string(const matrix_2d &matrix) {
    const __sklib_matrix_2d __skparam__matrix = __skadapter__to_sklib_matrix_2d(matrix);
    __sklib_string __skreturn = __sklib__matrix_to_string__matrix_2d_ref(__skparam__matrix);
    return __skadapter__to_string(__skreturn);
}
matrix_2d rotation_matrix(float deg) {
    float __skparam__deg = __skadapter__to_float(deg);
    __sklib_matrix_2d __skreturn = __sklib__rotation_matrix__float(__skparam__deg);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d scale_matrix(const point_2d &scale) {
    const __sklib_point_2d __skparam__scale = __skadapter__to_sklib_point_2d(scale);
    __sklib_matrix_2d __skreturn = __sklib__scale_matrix__point_2d_ref(__skparam__scale);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d scale_matrix(const vector_2d &scale) {
    const __sklib_vector_2d __skparam__scale = __skadapter__to_sklib_vector_2d(scale);
    __sklib_matrix_2d __skreturn = __sklib__scale_matrix__vector_2d_ref(__skparam__scale);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d scale_matrix(float scale) {
    float __skparam__scale = __skadapter__to_float(scale);
    __sklib_matrix_2d __skreturn = __sklib__scale_matrix__float(__skparam__scale);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d scale_rotate_translate_matrix(const point_2d &scale, float deg, const point_2d &translate) {
    const __sklib_point_2d __skparam__scale = __skadapter__to_sklib_point_2d(scale);
    float __skparam__deg = __skadapter__to_float(deg);
    const __sklib_point_2d __skparam__translate = __skadapter__to_sklib_point_2d(translate);
    __sklib_matrix_2d __skreturn = __sklib__scale_rotate_translate_matrix__point_2d_ref__float__point_2d_ref(__skparam__scale, __skparam__deg, __skparam__translate);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d translation_matrix(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_matrix_2d __skreturn = __sklib__translation_matrix__point_2d_ref(__skparam__pt);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d translation_matrix(const vector_2d &pt) {
    const __sklib_vector_2d __skparam__pt = __skadapter__to_sklib_vector_2d(pt);
    __sklib_matrix_2d __skreturn = __sklib__translation_matrix__vector_2d_ref(__skparam__pt);
    return __skadapter__to_matrix_2d(__skreturn);
}
matrix_2d translation_matrix(float dx, float dy) {
    float __skparam__dx = __skadapter__to_float(dx);
    float __skparam__dy = __skadapter__to_float(dy);
    __sklib_matrix_2d __skreturn = __sklib__translation_matrix__float__float(__skparam__dx, __skparam__dy);
    return __skadapter__to_matrix_2d(__skreturn);
}
void hide_mouse() {
    __sklib__hide_mouse();
}
bool mouse_clicked(mouse_button button) {
    int __skparam__button = __skadapter__to_int(button);
    int __skreturn = __sklib__mouse_clicked__mouse_button(__skparam__button);
    return __skadapter__to_bool(__skreturn);
}
bool mouse_down(mouse_button button) {
    int __skparam__button = __skadapter__to_int(button);
    int __skreturn = __sklib__mouse_down__mouse_button(__skparam__button);
    return __skadapter__to_bool(__skreturn);
}
vector_2d mouse_movement() {
    __sklib_vector_2d __skreturn = __sklib__mouse_movement();
    return __skadapter__to_vector_2d(__skreturn);
}
point_2d mouse_position() {
    __sklib_point_2d __skreturn = __sklib__mouse_position();
    return __skadapter__to_point_2d(__skreturn);
}
vector_2d mouse_position_vector() {
    __sklib_vector_2d __skreturn = __sklib__mouse_position_vector();
    return __skadapter__to_vector_2d(__skreturn);
}
bool mouse_shown() {
    int __skreturn = __sklib__mouse_shown();
    return __skadapter__to_bool(__skreturn);
}
bool mouse_up(mouse_button button) {
    int __skparam__button = __skadapter__to_int(button);
    int __skreturn = __sklib__mouse_up__mouse_button(__skparam__button);
    return __skadapter__to_bool(__skreturn);
}
vector_2d mouse_wheel_scroll() {
    __sklib_vector_2d __skreturn = __sklib__mouse_wheel_scroll();
    return __skadapter__to_vector_2d(__skreturn);
}
float mouse_x() {
    float __skreturn = __sklib__mouse_x();
    return __skadapter__to_float(__skreturn);
}
float mouse_y() {
    float __skreturn = __sklib__mouse_y();
    return __skadapter__to_float(__skreturn);
}
void move_mouse(float x, float y) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__move_mouse__float__float(__skparam__x, __skparam__y);
}
void move_mouse(point_2d point) {
    __sklib_point_2d __skparam__point = __skadapter__to_sklib_point_2d(point);
    __sklib__move_mouse__point_2d(__skparam__point);
}
void show_mouse() {
    __sklib__show_mouse();
}
void show_mouse(bool show) {
    int __skparam__show = __skadapter__to_int(show);
    __sklib__show_mouse__bool(__skparam__show);
}
void fade_music_in(const string &name, int ms) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_music_in__string_ref__int(__skparam__name, __skparam__ms);
    __skadapter__free__sklib_string(__skparam__name);
}
void fade_music_in(const string &name, int times, int ms) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__times = __skadapter__to_int(times);
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_music_in__string_ref__int__int(__skparam__name, __skparam__times, __skparam__ms);
    __skadapter__free__sklib_string(__skparam__name);
}
void fade_music_in(music data, int ms) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_music_in__music__int(__skparam__data, __skparam__ms);
}
void fade_music_in(music data, int times, int ms) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    int __skparam__times = __skadapter__to_int(times);
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_music_in__music__int__int(__skparam__data, __skparam__times, __skparam__ms);
}
void fade_music_out(int ms) {
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_music_out__int(__skparam__ms);
}
void free_all_music() {
    __sklib__free_all_music();
}
void free_music(music effect) {
    __sklib_music __skparam__effect = __skadapter__to_sklib_music(effect);
    __sklib__free_music__music(__skparam__effect);
}
bool has_music(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_music__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
music load_music(const string &name, const string &filename) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_music __skreturn = __sklib__load_music__string_ref__string_ref(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_music(__skreturn);
}
string music_filename(music data) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    __sklib_string __skreturn = __sklib__music_filename__music(__skparam__data);
    return __skadapter__to_string(__skreturn);
}
string music_name(music data) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    __sklib_string __skreturn = __sklib__music_name__music(__skparam__data);
    return __skadapter__to_string(__skreturn);
}
music music_named(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_music __skreturn = __sklib__music_named__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_music(__skreturn);
}
bool music_playing() {
    int __skreturn = __sklib__music_playing();
    return __skadapter__to_bool(__skreturn);
}
float music_volume() {
    float __skreturn = __sklib__music_volume();
    return __skadapter__to_float(__skreturn);
}
void pause_music() {
    __sklib__pause_music();
}
void play_music(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__play_music__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void play_music(const string &name, int times) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__times = __skadapter__to_int(times);
    __sklib__play_music__string_ref__int(__skparam__name, __skparam__times);
    __skadapter__free__sklib_string(__skparam__name);
}
void play_music(music data) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    __sklib__play_music__music(__skparam__data);
}
void play_music(music data, int times) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    int __skparam__times = __skadapter__to_int(times);
    __sklib__play_music__music__int(__skparam__data, __skparam__times);
}
void play_music(music data, int times, float volume) {
    __sklib_music __skparam__data = __skadapter__to_sklib_music(data);
    int __skparam__times = __skadapter__to_int(times);
    float __skparam__volume = __skadapter__to_float(volume);
    __sklib__play_music__music__int__float(__skparam__data, __skparam__times, __skparam__volume);
}
void resume_music() {
    __sklib__resume_music();
}
void set_music_volume(float volume) {
    float __skparam__volume = __skadapter__to_float(volume);
    __sklib__set_music_volume__float(__skparam__volume);
}
void stop_music() {
    __sklib__stop_music();
}
bool accept_all_new_connections() {
    int __skreturn = __sklib__accept_all_new_connections();
    return __skadapter__to_bool(__skreturn);
}
bool accept_new_connection(server_socket server) {
    __sklib_server_socket __skparam__server = __skadapter__to_sklib_server_socket(server);
    int __skreturn = __sklib__accept_new_connection__server_socket(__skparam__server);
    return __skadapter__to_bool(__skreturn);
}
void close_all_connections() {
    __sklib__close_all_connections();
}
void close_all_servers() {
    __sklib__close_all_servers();
}
bool close_connection(connection a_connection) {
    __sklib_connection __skparam__a_connection = __skadapter__to_sklib_connection(a_connection);
    int __skreturn = __sklib__close_connection__connection(__skparam__a_connection);
    return __skadapter__to_bool(__skreturn);
}
bool close_connection(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__close_connection__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
void close_message(message msg) {
    __sklib_message __skparam__msg = __skadapter__to_sklib_message(msg);
    __sklib__close_message__message(__skparam__msg);
}
bool close_server(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__close_server__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool close_server(server_socket svr) {
    __sklib_server_socket __skparam__svr = __skadapter__to_sklib_server_socket(svr);
    int __skreturn = __sklib__close_server__server_socket(__skparam__svr);
    return __skadapter__to_bool(__skreturn);
}
unsigned int connection_count(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    unsigned int __skreturn = __sklib__connection_count__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_unsigned_int(__skreturn);
}
unsigned int connection_count(server_socket server) {
    __sklib_server_socket __skparam__server = __skadapter__to_sklib_server_socket(server);
    unsigned int __skreturn = __sklib__connection_count__server_socket(__skparam__server);
    return __skadapter__to_unsigned_int(__skreturn);
}
server_socket create_server(const string &name, unsigned short port) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_server_socket __skreturn = __sklib__create_server__string_ref__unsigned_short(__skparam__name, __skparam__port);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_server_socket(__skreturn);
}
server_socket create_server(const string &name, unsigned short port, connection_type protocol) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    int __skparam__protocol = __skadapter__to_int(protocol);
    __sklib_server_socket __skreturn = __sklib__create_server__string_ref__unsigned_short__connection_type(__skparam__name, __skparam__port, __skparam__protocol);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_server_socket(__skreturn);
}
string dec_to_hex(unsigned int a_dec) {
    unsigned int __skparam__a_dec = __skadapter__to_unsigned_int(a_dec);
    __sklib_string __skreturn = __sklib__dec_to_hex__unsigned_int(__skparam__a_dec);
    return __skadapter__to_string(__skreturn);
}
bool has_new_connections() {
    int __skreturn = __sklib__has_new_connections();
    return __skadapter__to_bool(__skreturn);
}
bool has_server(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_server__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
string hex_str_to_ipv4(const string &a_hex) {
    const __sklib_string __skparam__a_hex = __skadapter__to_sklib_string(a_hex);
    __sklib_string __skreturn = __sklib__hex_str_to_ipv4__string_ref(__skparam__a_hex);
    __skadapter__free__sklib_string(__skparam__a_hex);
    return __skadapter__to_string(__skreturn);
}
string hex_to_dec_string(const string &a_hex) {
    const __sklib_string __skparam__a_hex = __skadapter__to_sklib_string(a_hex);
    __sklib_string __skreturn = __sklib__hex_to_dec_string__string_ref(__skparam__a_hex);
    __skadapter__free__sklib_string(__skparam__a_hex);
    return __skadapter__to_string(__skreturn);
}
unsigned int ipv4_to_dec(const string &a_ip) {
    const __sklib_string __skparam__a_ip = __skadapter__to_sklib_string(a_ip);
    unsigned int __skreturn = __sklib__ipv4_to_dec__string_ref(__skparam__a_ip);
    __skadapter__free__sklib_string(__skparam__a_ip);
    return __skadapter__to_unsigned_int(__skreturn);
}
string ipv4_to_hex(const string &a_ip) {
    const __sklib_string __skparam__a_ip = __skadapter__to_sklib_string(a_ip);
    __sklib_string __skreturn = __sklib__ipv4_to_hex__string_ref(__skparam__a_ip);
    __skadapter__free__sklib_string(__skparam__a_ip);
    return __skadapter__to_string(__skreturn);
}
string ipv4_to_str(unsigned int ip) {
    unsigned int __skparam__ip = __skadapter__to_unsigned_int(ip);
    __sklib_string __skreturn = __sklib__ipv4_to_str__unsigned_int(__skparam__ip);
    return __skadapter__to_string(__skreturn);
}
connection last_connection(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_connection __skreturn = __sklib__last_connection__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_connection(__skreturn);
}
connection last_connection(server_socket server) {
    __sklib_server_socket __skparam__server = __skadapter__to_sklib_server_socket(server);
    __sklib_connection __skreturn = __sklib__last_connection__server_socket(__skparam__server);
    return __skadapter__to_connection(__skreturn);
}
string my_ip() {
    __sklib_string __skreturn = __sklib__my_ip();
    return __skadapter__to_string(__skreturn);
}
connection open_connection(const string &name, const string &host, unsigned short port) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__host = __skadapter__to_sklib_string(host);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_connection __skreturn = __sklib__open_connection__string_ref__string_ref__unsigned_short(__skparam__name, __skparam__host, __skparam__port);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__host);
    return __skadapter__to_connection(__skreturn);
}
connection open_connection(const string &name, const string &host, unsigned short port, connection_type protocol) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__host = __skadapter__to_sklib_string(host);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    int __skparam__protocol = __skadapter__to_int(protocol);
    __sklib_connection __skreturn = __sklib__open_connection__string_ref__string_ref__unsigned_short__connection_type(__skparam__name, __skparam__host, __skparam__port, __skparam__protocol);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__host);
    return __skadapter__to_connection(__skreturn);
}
connection retrieve_connection(const string &name, int idx) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_connection __skreturn = __sklib__retrieve_connection__string_ref__int(__skparam__name, __skparam__idx);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_connection(__skreturn);
}
connection retrieve_connection(server_socket server, int idx) {
    __sklib_server_socket __skparam__server = __skadapter__to_sklib_server_socket(server);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_connection __skreturn = __sklib__retrieve_connection__server_socket__int(__skparam__server, __skparam__idx);
    return __skadapter__to_connection(__skreturn);
}
bool server_has_new_connection(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__server_has_new_connection__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool server_has_new_connection(server_socket server) {
    __sklib_server_socket __skparam__server = __skadapter__to_sklib_server_socket(server);
    int __skreturn = __sklib__server_has_new_connection__server_socket(__skparam__server);
    return __skadapter__to_bool(__skreturn);
}
server_socket server_named(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_server_socket __skreturn = __sklib__server_named__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_server_socket(__skreturn);
}
void draw_pixel(color clr, const point_2d &pt) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib__draw_pixel__color__point_2d_ref(__skparam__clr, __skparam__pt);
}
void draw_pixel(color clr, const point_2d &pt, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_pixel__color__point_2d_ref__drawing_options(__skparam__clr, __skparam__pt, __skparam__opts);
}
void draw_pixel(color clr, float x, float y) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__draw_pixel__color__float__float(__skparam__clr, __skparam__x, __skparam__y);
}
void draw_pixel(color clr, float x, float y, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_pixel__color__float__float__drawing_options(__skparam__clr, __skparam__x, __skparam__y, __skparam__opts);
}
color get_pixel(bitmap bmp, const point_2d &pt) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_color __skreturn = __sklib__get_pixel__bitmap__point_2d_ref(__skparam__bmp, __skparam__pt);
    return __skadapter__to_color(__skreturn);
}
color get_pixel(bitmap bmp, float x, float y) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_color __skreturn = __sklib__get_pixel__bitmap__float__float(__skparam__bmp, __skparam__x, __skparam__y);
    return __skadapter__to_color(__skreturn);
}
color get_pixel(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_color __skreturn = __sklib__get_pixel__point_2d_ref(__skparam__pt);
    return __skadapter__to_color(__skreturn);
}
color get_pixel(float x, float y) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_color __skreturn = __sklib__get_pixel__float__float(__skparam__x, __skparam__y);
    return __skadapter__to_color(__skreturn);
}
color get_pixel(window wnd, const point_2d &pt) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_color __skreturn = __sklib__get_pixel__window__point_2d_ref(__skparam__wnd, __skparam__pt);
    return __skadapter__to_color(__skreturn);
}
color get_pixel(window wnd, float x, float y) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_color __skreturn = __sklib__get_pixel__window__float__float(__skparam__wnd, __skparam__x, __skparam__y);
    return __skadapter__to_color(__skreturn);
}
point_2d point_at(float x, float y) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_point_2d __skreturn = __sklib__point_at__float__float(__skparam__x, __skparam__y);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d point_at_origin() {
    __sklib_point_2d __skreturn = __sklib__point_at_origin();
    return __skadapter__to_point_2d(__skreturn);
}
bool point_in_circle(const point_2d &pt, const circle &c) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    int __skreturn = __sklib__point_in_circle__point_2d_ref__circle_ref(__skparam__pt, __skparam__c);
    return __skadapter__to_bool(__skreturn);
}
bool point_in_quad(const point_2d &pt, const quad &q) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    int __skreturn = __sklib__point_in_quad__point_2d_ref__quad_ref(__skparam__pt, __skparam__q);
    return __skadapter__to_bool(__skreturn);
}
bool point_in_rectangle(const point_2d &pt, const rectangle &rect) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__point_in_rectangle__point_2d_ref__rectangle_ref(__skparam__pt, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
bool point_in_triangle(const point_2d &pt, const triangle &tri) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    int __skreturn = __sklib__point_in_triangle__point_2d_ref__triangle_ref(__skparam__pt, __skparam__tri);
    return __skadapter__to_bool(__skreturn);
}
float point_line_distance(const point_2d &pt, const line &l) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    float __skreturn = __sklib__point_line_distance__point_2d_ref__line_ref(__skparam__pt, __skparam__l);
    return __skadapter__to_float(__skreturn);
}
point_2d point_offset_by(const point_2d &start_point, const vector_2d &offset) {
    const __sklib_point_2d __skparam__start_point = __skadapter__to_sklib_point_2d(start_point);
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib_point_2d __skreturn = __sklib__point_offset_by__point_2d_ref__vector_2d_ref(__skparam__start_point, __skparam__offset);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d point_offset_from_origin(const vector_2d &offset) {
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib_point_2d __skreturn = __sklib__point_offset_from_origin__vector_2d_ref(__skparam__offset);
    return __skadapter__to_point_2d(__skreturn);
}
bool point_on_line(const point_2d &pt, const line &l) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    int __skreturn = __sklib__point_on_line__point_2d_ref__line_ref(__skparam__pt, __skparam__l);
    return __skadapter__to_bool(__skreturn);
}
bool point_on_line(const point_2d &pt, const line &l, float proximity) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    float __skparam__proximity = __skadapter__to_float(proximity);
    int __skreturn = __sklib__point_on_line__point_2d_ref__line_ref__float(__skparam__pt, __skparam__l, __skparam__proximity);
    return __skadapter__to_bool(__skreturn);
}
float point_point_angle(const point_2d &pt1, const point_2d &pt2) {
    const __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    const __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    float __skreturn = __sklib__point_point_angle__point_2d_ref__point_2d_ref(__skparam__pt1, __skparam__pt2);
    return __skadapter__to_float(__skreturn);
}
float point_point_distance(const point_2d &pt1, const point_2d &pt2) {
    const __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    const __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    float __skreturn = __sklib__point_point_distance__point_2d_ref__point_2d_ref(__skparam__pt1, __skparam__pt2);
    return __skadapter__to_float(__skreturn);
}
string point_to_string(const point_2d &pt) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_string __skreturn = __sklib__point_to_string__point_2d_ref(__skparam__pt);
    return __skadapter__to_string(__skreturn);
}
point_2d random_bitmap_point(bitmap bmp) {
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib_point_2d __skreturn = __sklib__random_bitmap_point__bitmap(__skparam__bmp);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d random_screen_point() {
    __sklib_point_2d __skreturn = __sklib__random_screen_point();
    return __skadapter__to_point_2d(__skreturn);
}
point_2d random_window_point(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_point_2d __skreturn = __sklib__random_window_point__window(__skparam__wind);
    return __skadapter__to_point_2d(__skreturn);
}
bool same_point(const point_2d &pt1, const point_2d &pt2) {
    const __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    const __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    int __skreturn = __sklib__same_point__point_2d_ref__point_2d_ref(__skparam__pt1, __skparam__pt2);
    return __skadapter__to_bool(__skreturn);
}
quad quad_from(const point_2d &p1, const point_2d &p2, const point_2d &p3, const point_2d &p4) {
    const __sklib_point_2d __skparam__p1 = __skadapter__to_sklib_point_2d(p1);
    const __sklib_point_2d __skparam__p2 = __skadapter__to_sklib_point_2d(p2);
    const __sklib_point_2d __skparam__p3 = __skadapter__to_sklib_point_2d(p3);
    const __sklib_point_2d __skparam__p4 = __skadapter__to_sklib_point_2d(p4);
    __sklib_quad __skreturn = __sklib__quad_from__point_2d_ref__point_2d_ref__point_2d_ref__point_2d_ref(__skparam__p1, __skparam__p2, __skparam__p3, __skparam__p4);
    return __skadapter__to_quad(__skreturn);
}
quad quad_from(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_quad __skreturn = __sklib__quad_from__rectangle_ref(__skparam__rect);
    return __skadapter__to_quad(__skreturn);
}
quad quad_from(const rectangle &rect, const matrix_2d &transform) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    const __sklib_matrix_2d __skparam__transform = __skadapter__to_sklib_matrix_2d(transform);
    __sklib_quad __skreturn = __sklib__quad_from__rectangle_ref__matrix_2d_ref(__skparam__rect, __skparam__transform);
    return __skadapter__to_quad(__skreturn);
}
quad quad_from(float x_top_left, float y_top_left, float x_top_right, float y_top_right, float x_bottom_left, float y_bottom_left, float x_bottom_right, float y_bottom_right) {
    float __skparam__x_top_left = __skadapter__to_float(x_top_left);
    float __skparam__y_top_left = __skadapter__to_float(y_top_left);
    float __skparam__x_top_right = __skadapter__to_float(x_top_right);
    float __skparam__y_top_right = __skadapter__to_float(y_top_right);
    float __skparam__x_bottom_left = __skadapter__to_float(x_bottom_left);
    float __skparam__y_bottom_left = __skadapter__to_float(y_bottom_left);
    float __skparam__x_bottom_right = __skadapter__to_float(x_bottom_right);
    float __skparam__y_bottom_right = __skadapter__to_float(y_bottom_right);
    __sklib_quad __skreturn = __sklib__quad_from__float__float__float__float__float__float__float__float(__skparam__x_top_left, __skparam__y_top_left, __skparam__x_top_right, __skparam__y_top_right, __skparam__x_bottom_left, __skparam__y_bottom_left, __skparam__x_bottom_right, __skparam__y_bottom_right);
    return __skadapter__to_quad(__skreturn);
}
bool quads_intersect(const quad &q1, const quad &q2) {
    const __sklib_quad __skparam__q1 = __skadapter__to_sklib_quad(q1);
    const __sklib_quad __skparam__q2 = __skadapter__to_sklib_quad(q2);
    int __skreturn = __sklib__quads_intersect__quad_ref__quad_ref(__skparam__q1, __skparam__q2);
    return __skadapter__to_bool(__skreturn);
}
void set_quad_point(quad &q, int idx, const point_2d &value) {
    __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    int __skparam__idx = __skadapter__to_int(idx);
    const __sklib_point_2d __skparam__value = __skadapter__to_sklib_point_2d(value);
    __sklib__set_quad_point__quad_ref__int__point_2d_ref(&__skparam__q, __skparam__idx, __skparam__value);
    q = __skadapter__to_quad(__skparam__q);
}
vector<triangle> triangles_from(const quad &q) {
    const __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    __sklib_vector_triangle __skreturn = __sklib__triangles_from__quad_ref(__skparam__q);
    return __skadapter__to_vector_triangle(__skreturn);
}
float rnd() {
    float __skreturn = __sklib__rnd();
    return __skadapter__to_float(__skreturn);
}
int rnd(int ubound) {
    int __skparam__ubound = __skadapter__to_int(ubound);
    int __skreturn = __sklib__rnd__int(__skparam__ubound);
    return __skadapter__to_int(__skreturn);
}
void draw_quad(color clr, const quad &q) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    __sklib__draw_quad__color__quad_ref(__skparam__clr, __skparam__q);
}
void draw_quad(color clr, const quad &q, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_quad__color__quad_ref__drawing_options_ref(__skparam__clr, __skparam__q, __skparam__opts);
}
void draw_rectangle(color clr, const rectangle &rect) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib__draw_rectangle__color__rectangle_ref(__skparam__clr, __skparam__rect);
}
void draw_rectangle(color clr, const rectangle &rect, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_rectangle__color__rectangle_ref__drawing_options_ref(__skparam__clr, __skparam__rect, __skparam__opts);
}
void draw_rectangle(color clr, float x, float y, float width, float height) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib__draw_rectangle__color__float__float__float__float(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height);
}
void draw_rectangle(color clr, float x, float y, float width, float height, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_rectangle__color__float__float__float__float__drawing_options_ref(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height, __skparam__opts);
}
void fill_quad(color clr, const quad &q) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    __sklib__fill_quad__color__quad_ref(__skparam__clr, __skparam__q);
}
void fill_quad(color clr, const quad &q, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_quad __skparam__q = __skadapter__to_sklib_quad(q);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_quad__color__quad_ref__drawing_options_ref(__skparam__clr, __skparam__q, __skparam__opts);
}
void fill_rectangle(color clr, const rectangle &rect) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib__fill_rectangle__color__rectangle_ref(__skparam__clr, __skparam__rect);
}
void fill_rectangle(color clr, const rectangle &rect, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_rectangle__color__rectangle_ref__drawing_options_ref(__skparam__clr, __skparam__rect, __skparam__opts);
}
void fill_rectangle(color clr, float x, float y, float width, float height) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib__fill_rectangle__color__float__float__float__float(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height);
}
void fill_rectangle(color clr, float x, float y, float width, float height, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_rectangle__color__float__float__float__float__drawing_options_ref(__skparam__clr, __skparam__x, __skparam__y, __skparam__width, __skparam__height, __skparam__opts);
}
rectangle inset_rectangle(const rectangle &rect, float inset_amount) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    float __skparam__inset_amount = __skadapter__to_float(inset_amount);
    __sklib_rectangle __skreturn = __sklib__inset_rectangle__rectangle_ref__float(__skparam__rect, __skparam__inset_amount);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle intersection(const rectangle &rect1, const rectangle &rect2) {
    const __sklib_rectangle __skparam__rect1 = __skadapter__to_sklib_rectangle(rect1);
    const __sklib_rectangle __skparam__rect2 = __skadapter__to_sklib_rectangle(rect2);
    __sklib_rectangle __skreturn = __sklib__intersection__rectangle_ref__rectangle_ref(__skparam__rect1, __skparam__rect2);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle rectangle_around(const triangle &t) {
    const __sklib_triangle __skparam__t = __skadapter__to_sklib_triangle(t);
    __sklib_rectangle __skreturn = __sklib__rectangle_around__triangle_ref(__skparam__t);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle rectangle_around(const circle &c) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    __sklib_rectangle __skreturn = __sklib__rectangle_around__circle_ref(__skparam__c);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle rectangle_around(const line &l) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_rectangle __skreturn = __sklib__rectangle_around__line_ref(__skparam__l);
    return __skadapter__to_rectangle(__skreturn);
}
float rectangle_bottom(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    float __skreturn = __sklib__rectangle_bottom__rectangle_ref(__skparam__rect);
    return __skadapter__to_float(__skreturn);
}
point_2d rectangle_center(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_point_2d __skreturn = __sklib__rectangle_center__rectangle_ref(__skparam__rect);
    return __skadapter__to_point_2d(__skreturn);
}
rectangle rectangle_from(const point_2d pt, const float width, const float height) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const float __skparam__width = __skadapter__to_float(width);
    const float __skparam__height = __skadapter__to_float(height);
    __sklib_rectangle __skreturn = __sklib__rectangle_from__point_2d__float__float(__skparam__pt, __skparam__width, __skparam__height);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle rectangle_from(const point_2d pt1, const point_2d pt2) {
    const __sklib_point_2d __skparam__pt1 = __skadapter__to_sklib_point_2d(pt1);
    const __sklib_point_2d __skparam__pt2 = __skadapter__to_sklib_point_2d(pt2);
    __sklib_rectangle __skreturn = __sklib__rectangle_from__point_2d__point_2d(__skparam__pt1, __skparam__pt2);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle rectangle_from(float x, float y, float width, float height) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    float __skparam__width = __skadapter__to_float(width);
    float __skparam__height = __skadapter__to_float(height);
    __sklib_rectangle __skreturn = __sklib__rectangle_from__float__float__float__float(__skparam__x, __skparam__y, __skparam__width, __skparam__height);
    return __skadapter__to_rectangle(__skreturn);
}
float rectangle_left(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    float __skreturn = __sklib__rectangle_left__rectangle_ref(__skparam__rect);
    return __skadapter__to_float(__skreturn);
}
rectangle rectangle_offset_by(const rectangle &rect, const vector_2d &offset) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib_rectangle __skreturn = __sklib__rectangle_offset_by__rectangle_ref__vector_2d_ref(__skparam__rect, __skparam__offset);
    return __skadapter__to_rectangle(__skreturn);
}
float rectangle_right(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    float __skreturn = __sklib__rectangle_right__rectangle_ref(__skparam__rect);
    return __skadapter__to_float(__skreturn);
}
string rectangle_to_string(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_string __skreturn = __sklib__rectangle_to_string__rectangle_ref(__skparam__rect);
    return __skadapter__to_string(__skreturn);
}
float rectangle_top(const rectangle &rect) {
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    float __skreturn = __sklib__rectangle_top__rectangle_ref(__skparam__rect);
    return __skadapter__to_float(__skreturn);
}
bool rectangles_intersect(const rectangle &rect1, const rectangle &rect2) {
    const __sklib_rectangle __skparam__rect1 = __skadapter__to_sklib_rectangle(rect1);
    const __sklib_rectangle __skparam__rect2 = __skadapter__to_sklib_rectangle(rect2);
    int __skreturn = __sklib__rectangles_intersect__rectangle_ref__rectangle_ref(__skparam__rect1, __skparam__rect2);
    return __skadapter__to_bool(__skreturn);
}
void deregister_free_notifier(free_notifier *handler) {
    __sklib_free_notifier *__skparam__handler = handler;
    __sklib__deregister_free_notifier__free_notifier_ptr(__skparam__handler);
}
string path_to_resource(const string &filename, resource_kind kind) {
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    int __skparam__kind = __skadapter__to_int(kind);
    __sklib_string __skreturn = __sklib__path_to_resource__string_ref__resource_kind(__skparam__filename, __skparam__kind);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_string(__skreturn);
}
string path_to_resources() {
    __sklib_string __skreturn = __sklib__path_to_resources();
    return __skadapter__to_string(__skreturn);
}
string path_to_resources(resource_kind kind) {
    int __skparam__kind = __skadapter__to_int(kind);
    __sklib_string __skreturn = __sklib__path_to_resources__resource_kind(__skparam__kind);
    return __skadapter__to_string(__skreturn);
}
void register_free_notifier(free_notifier *fn) {
    __sklib_free_notifier *__skparam__fn = fn;
    __sklib__register_free_notifier__free_notifier_ptr(__skparam__fn);
}
void set_resources_path(const string &path) {
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    __sklib__set_resources_path__string_ref(__skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
}
void fade_all_sound_effects_out(int ms) {
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_all_sound_effects_out__int(__skparam__ms);
}
void fade_sound_effect_out(sound_effect effect, int ms) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    int __skparam__ms = __skadapter__to_int(ms);
    __sklib__fade_sound_effect_out__sound_effect__int(__skparam__effect, __skparam__ms);
}
void free_all_sound_effects() {
    __sklib__free_all_sound_effects();
}
void free_sound_effect(sound_effect effect) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    __sklib__free_sound_effect__sound_effect(__skparam__effect);
}
bool has_sound_effect(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_sound_effect__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
sound_effect load_sound_effect(const string &name, const string &filename) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_sound_effect __skreturn = __sklib__load_sound_effect__string_ref__string_ref(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_sound_effect(__skreturn);
}
void play_sound_effect(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__play_sound_effect__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void play_sound_effect(const string &name, float volume) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    float __skparam__volume = __skadapter__to_float(volume);
    __sklib__play_sound_effect__string_ref__float(__skparam__name, __skparam__volume);
    __skadapter__free__sklib_string(__skparam__name);
}
void play_sound_effect(const string &name, int times) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__times = __skadapter__to_int(times);
    __sklib__play_sound_effect__string_ref__int(__skparam__name, __skparam__times);
    __skadapter__free__sklib_string(__skparam__name);
}
void play_sound_effect(const string &name, int times, float volume) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__times = __skadapter__to_int(times);
    float __skparam__volume = __skadapter__to_float(volume);
    __sklib__play_sound_effect__string_ref__int__float(__skparam__name, __skparam__times, __skparam__volume);
    __skadapter__free__sklib_string(__skparam__name);
}
void play_sound_effect(sound_effect effect) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    __sklib__play_sound_effect__sound_effect(__skparam__effect);
}
void play_sound_effect(sound_effect effect, float volume) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    float __skparam__volume = __skadapter__to_float(volume);
    __sklib__play_sound_effect__sound_effect__float(__skparam__effect, __skparam__volume);
}
void play_sound_effect(sound_effect effect, int times) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    int __skparam__times = __skadapter__to_int(times);
    __sklib__play_sound_effect__sound_effect__int(__skparam__effect, __skparam__times);
}
void play_sound_effect(sound_effect effect, int times, float volume) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    int __skparam__times = __skadapter__to_int(times);
    float __skparam__volume = __skadapter__to_float(volume);
    __sklib__play_sound_effect__sound_effect__int__float(__skparam__effect, __skparam__times, __skparam__volume);
}
string sound_effect_filename(sound_effect effect) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    __sklib_string __skreturn = __sklib__sound_effect_filename__sound_effect(__skparam__effect);
    return __skadapter__to_string(__skreturn);
}
string sound_effect_name(sound_effect effect) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    __sklib_string __skreturn = __sklib__sound_effect_name__sound_effect(__skparam__effect);
    return __skadapter__to_string(__skreturn);
}
sound_effect sound_effect_named(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_sound_effect __skreturn = __sklib__sound_effect_named__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_sound_effect(__skreturn);
}
bool sound_effect_playing(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sound_effect_playing__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool sound_effect_playing(sound_effect effect) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    int __skreturn = __sklib__sound_effect_playing__sound_effect(__skparam__effect);
    return __skadapter__to_bool(__skreturn);
}
void stop_sound_effect(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__stop_sound_effect__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void stop_sound_effect(sound_effect effect) {
    __sklib_sound_effect __skparam__effect = __skadapter__to_sklib_sound_effect(effect);
    __sklib__stop_sound_effect__sound_effect(__skparam__effect);
}
void call_for_all_sprites(sprite_float_function *fn, float val) {
    __sklib_sprite_float_function *__skparam__fn = fn;
    float __skparam__val = __skadapter__to_float(val);
    __sklib__call_for_all_sprites__sprite_float_function_ptr__float(__skparam__fn, __skparam__val);
}
void call_for_all_sprites(sprite_function *fn) {
    __sklib_sprite_function *__skparam__fn = fn;
    __sklib__call_for_all_sprites__sprite_function_ptr(__skparam__fn);
}
void call_on_sprite_event(sprite_event_handler *handler) {
    __sklib_sprite_event_handler *__skparam__handler = handler;
    __sklib__call_on_sprite_event__sprite_event_handler_ptr(__skparam__handler);
}
point_2d center_point(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_point_2d __skreturn = __sklib__center_point__sprite(__skparam__s);
    return __skadapter__to_point_2d(__skreturn);
}
sprite create_sprite(bitmap layer) {
    __sklib_bitmap __skparam__layer = __skadapter__to_sklib_bitmap(layer);
    __sklib_sprite __skreturn = __sklib__create_sprite__bitmap(__skparam__layer);
    return __skadapter__to_sprite(__skreturn);
}
sprite create_sprite(bitmap layer, animation_script ani) {
    __sklib_bitmap __skparam__layer = __skadapter__to_sklib_bitmap(layer);
    __sklib_animation_script __skparam__ani = __skadapter__to_sklib_animation_script(ani);
    __sklib_sprite __skreturn = __sklib__create_sprite__bitmap__animation_script(__skparam__layer, __skparam__ani);
    return __skadapter__to_sprite(__skreturn);
}
sprite create_sprite(const string &bitmap_name) {
    const __sklib_string __skparam__bitmap_name = __skadapter__to_sklib_string(bitmap_name);
    __sklib_sprite __skreturn = __sklib__create_sprite__string_ref(__skparam__bitmap_name);
    __skadapter__free__sklib_string(__skparam__bitmap_name);
    return __skadapter__to_sprite(__skreturn);
}
sprite create_sprite(const string &name, bitmap layer) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_bitmap __skparam__layer = __skadapter__to_sklib_bitmap(layer);
    __sklib_sprite __skreturn = __sklib__create_sprite__string_ref__bitmap(__skparam__name, __skparam__layer);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_sprite(__skreturn);
}
sprite create_sprite(const string &name, bitmap layer, animation_script ani) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_bitmap __skparam__layer = __skadapter__to_sklib_bitmap(layer);
    __sklib_animation_script __skparam__ani = __skadapter__to_sklib_animation_script(ani);
    __sklib_sprite __skreturn = __sklib__create_sprite__string_ref__bitmap__animation_script(__skparam__name, __skparam__layer, __skparam__ani);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_sprite(__skreturn);
}
sprite create_sprite(const string &bitmap_name, const string &animation_name) {
    const __sklib_string __skparam__bitmap_name = __skadapter__to_sklib_string(bitmap_name);
    const __sklib_string __skparam__animation_name = __skadapter__to_sklib_string(animation_name);
    __sklib_sprite __skreturn = __sklib__create_sprite__string_ref__string_ref(__skparam__bitmap_name, __skparam__animation_name);
    __skadapter__free__sklib_string(__skparam__bitmap_name);
    __skadapter__free__sklib_string(__skparam__animation_name);
    return __skadapter__to_sprite(__skreturn);
}
void create_sprite_pack(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__create_sprite_pack__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
string current_sprite_pack() {
    __sklib_string __skreturn = __sklib__current_sprite_pack();
    return __skadapter__to_string(__skreturn);
}
void draw_all_sprites() {
    __sklib__draw_all_sprites();
}
void draw_sprite(sprite s, const vector_2d &offset) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_vector_2d __skparam__offset = __skadapter__to_sklib_vector_2d(offset);
    __sklib__draw_sprite__sprite__vector_2d_ref(__skparam__s, __skparam__offset);
}
void draw_sprite(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib__draw_sprite__sprite(__skparam__s);
}
void draw_sprite(sprite s, float x_offset, float y_offset) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__x_offset = __skadapter__to_float(x_offset);
    float __skparam__y_offset = __skadapter__to_float(y_offset);
    __sklib__draw_sprite__sprite__float__float(__skparam__s, __skparam__x_offset, __skparam__y_offset);
}
void free_all_sprites() {
    __sklib__free_all_sprites();
}
void free_sprite(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib__free_sprite__sprite(__skparam__s);
}
void free_sprite_pack(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__free_sprite_pack__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
bool has_sprite(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_sprite__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool has_sprite_pack(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_sprite_pack__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
void move_sprite(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib__move_sprite__sprite(__skparam__s);
}
void move_sprite(sprite s, const vector_2d &distance) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_vector_2d __skparam__distance = __skadapter__to_sklib_vector_2d(distance);
    __sklib__move_sprite__sprite__vector_2d_ref(__skparam__s, __skparam__distance);
}
void move_sprite(sprite s, const vector_2d &distance, float pct) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_vector_2d __skparam__distance = __skadapter__to_sklib_vector_2d(distance);
    float __skparam__pct = __skadapter__to_float(pct);
    __sklib__move_sprite__sprite__vector_2d_ref__float(__skparam__s, __skparam__distance, __skparam__pct);
}
void move_sprite(sprite s, float pct) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__pct = __skadapter__to_float(pct);
    __sklib__move_sprite__sprite__float(__skparam__s, __skparam__pct);
}
void move_sprite_to(sprite s, float x, float y) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__move_sprite_to__sprite__float__float(__skparam__s, __skparam__x, __skparam__y);
}
void select_sprite_pack(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__select_sprite_pack__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
int sprite_add_layer(sprite s, bitmap new_layer, const string &layer_name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_bitmap __skparam__new_layer = __skadapter__to_sklib_bitmap(new_layer);
    const __sklib_string __skparam__layer_name = __skadapter__to_sklib_string(layer_name);
    int __skreturn = __sklib__sprite_add_layer__sprite__bitmap__string_ref(__skparam__s, __skparam__new_layer, __skparam__layer_name);
    __skadapter__free__sklib_string(__skparam__layer_name);
    return __skadapter__to_int(__skreturn);
}
void sprite_add_to_velocity(sprite s, const vector_2d &value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_vector_2d __skparam__value = __skadapter__to_sklib_vector_2d(value);
    __sklib__sprite_add_to_velocity__sprite__vector_2d_ref(__skparam__s, __skparam__value);
}
void sprite_add_value(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__sprite_add_value__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void sprite_add_value(sprite s, const string &name, float init_val) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    float __skparam__init_val = __skadapter__to_float(init_val);
    __sklib__sprite_add_value__sprite__string_ref__float(__skparam__s, __skparam__name, __skparam__init_val);
    __skadapter__free__sklib_string(__skparam__name);
}
point_2d sprite_anchor_point(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_point_2d __skreturn = __sklib__sprite_anchor_point__sprite(__skparam__s);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d sprite_anchor_position(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_point_2d __skreturn = __sklib__sprite_anchor_position__sprite(__skparam__s);
    return __skadapter__to_point_2d(__skreturn);
}
bool sprite_animation_has_ended(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_animation_has_ended__sprite(__skparam__s);
    return __skadapter__to_bool(__skreturn);
}
string sprite_animation_name(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_string __skreturn = __sklib__sprite_animation_name__sprite(__skparam__s);
    return __skadapter__to_string(__skreturn);
}
bool sprite_at(sprite s, const point_2d &pt) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__sprite_at__sprite__point_2d_ref(__skparam__s, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
void sprite_bring_layer_forward(sprite s, int visible_layer) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__visible_layer = __skadapter__to_int(visible_layer);
    __sklib__sprite_bring_layer_forward__sprite__int(__skparam__s, __skparam__visible_layer);
}
void sprite_bring_layer_to_front(sprite s, int visible_layer) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__visible_layer = __skadapter__to_int(visible_layer);
    __sklib__sprite_bring_layer_to_front__sprite__int(__skparam__s, __skparam__visible_layer);
}
void sprite_call_on_event(sprite s, sprite_event_handler *handler) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_sprite_event_handler *__skparam__handler = handler;
    __sklib__sprite_call_on_event__sprite__sprite_event_handler_ptr(__skparam__s, __skparam__handler);
}
circle sprite_circle(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_circle __skreturn = __sklib__sprite_circle__sprite(__skparam__s);
    return __skadapter__to_circle(__skreturn);
}
bitmap sprite_collision_bitmap(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_bitmap __skreturn = __sklib__sprite_collision_bitmap__sprite(__skparam__s);
    return __skadapter__to_bitmap(__skreturn);
}
circle sprite_collision_circle(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_circle __skreturn = __sklib__sprite_collision_circle__sprite(__skparam__s);
    return __skadapter__to_circle(__skreturn);
}
collision_test_kind sprite_collision_kind(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_collision_kind__sprite(__skparam__s);
    return __skadapter__to_collision_test_kind(__skreturn);
}
rectangle sprite_collision_rectangle(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_rectangle __skreturn = __sklib__sprite_collision_rectangle__sprite(__skparam__s);
    return __skadapter__to_rectangle(__skreturn);
}
int sprite_current_cell(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_current_cell__sprite(__skparam__s);
    return __skadapter__to_int(__skreturn);
}
rectangle sprite_current_cell_rectangle(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_rectangle __skreturn = __sklib__sprite_current_cell_rectangle__sprite(__skparam__s);
    return __skadapter__to_rectangle(__skreturn);
}
float sprite_dx(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_dx__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
float sprite_dy(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_dy__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
bool sprite_has_value(sprite s, string name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sprite_has_value__sprite__string(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
float sprite_heading(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_heading__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
int sprite_height(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_height__sprite(__skparam__s);
    return __skadapter__to_int(__skreturn);
}
void sprite_hide_layer(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__sprite_hide_layer__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void sprite_hide_layer(sprite s, int id) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__id = __skadapter__to_int(id);
    __sklib__sprite_hide_layer__sprite__int(__skparam__s, __skparam__id);
}
bitmap sprite_layer(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_bitmap __skreturn = __sklib__sprite_layer__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bitmap(__skreturn);
}
bitmap sprite_layer(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_bitmap __skreturn = __sklib__sprite_layer__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_bitmap(__skreturn);
}
circle sprite_layer_circle(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_circle __skreturn = __sklib__sprite_layer_circle__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_circle(__skreturn);
}
circle sprite_layer_circle(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_circle __skreturn = __sklib__sprite_layer_circle__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_circle(__skreturn);
}
int sprite_layer_count(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_layer_count__sprite(__skparam__s);
    return __skadapter__to_int(__skreturn);
}
int sprite_layer_height(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sprite_layer_height__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int sprite_layer_height(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skreturn = __sklib__sprite_layer_height__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_int(__skreturn);
}
int sprite_layer_index(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sprite_layer_index__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
string sprite_layer_name(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_string __skreturn = __sklib__sprite_layer_name__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_string(__skreturn);
}
vector_2d sprite_layer_offset(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_vector_2d __skreturn = __sklib__sprite_layer_offset__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d sprite_layer_offset(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_vector_2d __skreturn = __sklib__sprite_layer_offset__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_vector_2d(__skreturn);
}
rectangle sprite_layer_rectangle(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_rectangle __skreturn = __sklib__sprite_layer_rectangle__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_rectangle(__skreturn);
}
rectangle sprite_layer_rectangle(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib_rectangle __skreturn = __sklib__sprite_layer_rectangle__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_rectangle(__skreturn);
}
int sprite_layer_width(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sprite_layer_width__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int sprite_layer_width(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skreturn = __sklib__sprite_layer_width__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_int(__skreturn);
}
matrix_2d sprite_location_matrix(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_matrix_2d __skreturn = __sklib__sprite_location_matrix__sprite(__skparam__s);
    return __skadapter__to_matrix_2d(__skreturn);
}
float sprite_mass(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_mass__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
bool sprite_move_from_anchor_point(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_move_from_anchor_point__sprite(__skparam__s);
    return __skadapter__to_bool(__skreturn);
}
void sprite_move_to(sprite s, const point_2d &pt, float taking_seconds) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    float __skparam__taking_seconds = __skadapter__to_float(taking_seconds);
    __sklib__sprite_move_to__sprite__point_2d_ref__float(__skparam__s, __skparam__pt, __skparam__taking_seconds);
}
string sprite_name(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_string __skreturn = __sklib__sprite_name__sprite(__skparam__s);
    return __skadapter__to_string(__skreturn);
}
sprite sprite_named(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_sprite __skreturn = __sklib__sprite_named__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_sprite(__skreturn);
}
bool sprite_offscreen(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_offscreen__sprite(__skparam__s);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_on_screen_at(sprite s, const point_2d &pt) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__sprite_on_screen_at__sprite__point_2d_ref(__skparam__s, __skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
bool sprite_on_screen_at(sprite s, float x, float y) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    int __skreturn = __sklib__sprite_on_screen_at__sprite__float__float(__skparam__s, __skparam__x, __skparam__y);
    return __skadapter__to_bool(__skreturn);
}
point_2d sprite_position(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_point_2d __skreturn = __sklib__sprite_position__sprite(__skparam__s);
    return __skadapter__to_point_2d(__skreturn);
}
void sprite_replay_animation(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib__sprite_replay_animation__sprite(__skparam__s);
}
void sprite_replay_animation(sprite s, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__sprite_replay_animation__sprite__bool(__skparam__s, __skparam__with_sound);
}
float sprite_rotation(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_rotation__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
float sprite_scale(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_scale__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
rectangle sprite_screen_rectangle(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_rectangle __skreturn = __sklib__sprite_screen_rectangle__sprite(__skparam__s);
    return __skadapter__to_rectangle(__skreturn);
}
void sprite_send_layer_backward(sprite s, int visible_layer) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__visible_layer = __skadapter__to_int(visible_layer);
    __sklib__sprite_send_layer_backward__sprite__int(__skparam__s, __skparam__visible_layer);
}
void sprite_send_layer_to_back(sprite s, int visible_layer) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__visible_layer = __skadapter__to_int(visible_layer);
    __sklib__sprite_send_layer_to_back__sprite__int(__skparam__s, __skparam__visible_layer);
}
void sprite_set_anchor_point(sprite s, const point_2d &pt) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib__sprite_set_anchor_point__sprite__point_2d_ref(__skparam__s, __skparam__pt);
}
void sprite_set_collision_bitmap(sprite s, bitmap bmp) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib__sprite_set_collision_bitmap__sprite__bitmap(__skparam__s, __skparam__bmp);
}
void sprite_set_collision_kind(sprite s, collision_test_kind value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__value = __skadapter__to_int(value);
    __sklib__sprite_set_collision_kind__sprite__collision_test_kind(__skparam__s, __skparam__value);
}
void sprite_set_dx(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_dx__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_dy(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_dy__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_heading(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_heading__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_layer_offset(sprite s, const string &name, const vector_2d &value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_vector_2d __skparam__value = __skadapter__to_sklib_vector_2d(value);
    __sklib__sprite_set_layer_offset__sprite__string_ref__vector_2d_ref(__skparam__s, __skparam__name, __skparam__value);
    __skadapter__free__sklib_string(__skparam__name);
}
void sprite_set_layer_offset(sprite s, int idx, const vector_2d &value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    const __sklib_vector_2d __skparam__value = __skadapter__to_sklib_vector_2d(value);
    __sklib__sprite_set_layer_offset__sprite__int__vector_2d_ref(__skparam__s, __skparam__idx, __skparam__value);
}
void sprite_set_mass(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_mass__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_move_from_anchor_point(sprite s, bool value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__value = __skadapter__to_int(value);
    __sklib__sprite_set_move_from_anchor_point__sprite__bool(__skparam__s, __skparam__value);
}
void sprite_set_position(sprite s, const point_2d &value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__value = __skadapter__to_sklib_point_2d(value);
    __sklib__sprite_set_position__sprite__point_2d_ref(__skparam__s, __skparam__value);
}
void sprite_set_rotation(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_rotation__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_scale(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_scale__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_speed(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_speed__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_value(sprite s, const string &name, float val) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    float __skparam__val = __skadapter__to_float(val);
    __sklib__sprite_set_value__sprite__string_ref__float(__skparam__s, __skparam__name, __skparam__val);
    __skadapter__free__sklib_string(__skparam__name);
}
void sprite_set_velocity(sprite s, const vector_2d &value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_vector_2d __skparam__value = __skadapter__to_sklib_vector_2d(value);
    __sklib__sprite_set_velocity__sprite__vector_2d_ref(__skparam__s, __skparam__value);
}
void sprite_set_x(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_x__sprite__float(__skparam__s, __skparam__value);
}
void sprite_set_y(sprite s, float value) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__value = __skadapter__to_float(value);
    __sklib__sprite_set_y__sprite__float(__skparam__s, __skparam__value);
}
int sprite_show_layer(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sprite_show_layer__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int sprite_show_layer(sprite s, int id) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__id = __skadapter__to_int(id);
    int __skreturn = __sklib__sprite_show_layer__sprite__int(__skparam__s, __skparam__id);
    return __skadapter__to_int(__skreturn);
}
float sprite_speed(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_speed__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
void sprite_start_animation(sprite s, const string &named) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__named = __skadapter__to_sklib_string(named);
    __sklib__sprite_start_animation__sprite__string_ref(__skparam__s, __skparam__named);
    __skadapter__free__sklib_string(__skparam__named);
}
void sprite_start_animation(sprite s, const string &named, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__named = __skadapter__to_sklib_string(named);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__sprite_start_animation__sprite__string_ref__bool(__skparam__s, __skparam__named, __skparam__with_sound);
    __skadapter__free__sklib_string(__skparam__named);
}
void sprite_start_animation(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    __sklib__sprite_start_animation__sprite__int(__skparam__s, __skparam__idx);
}
void sprite_start_animation(sprite s, int idx, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__sprite_start_animation__sprite__int__bool(__skparam__s, __skparam__idx, __skparam__with_sound);
}
void sprite_stop_calling_on_event(sprite s, sprite_event_handler *handler) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_sprite_event_handler *__skparam__handler = handler;
    __sklib__sprite_stop_calling_on_event__sprite__sprite_event_handler_ptr(__skparam__s, __skparam__handler);
}
void sprite_toggle_layer_visible(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__sprite_toggle_layer_visible__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void sprite_toggle_layer_visible(sprite s, int id) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__id = __skadapter__to_int(id);
    __sklib__sprite_toggle_layer_visible__sprite__int(__skparam__s, __skparam__id);
}
float sprite_value(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    float __skreturn = __sklib__sprite_value__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_float(__skreturn);
}
int sprite_value_count(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_value_count__sprite(__skparam__s);
    return __skadapter__to_int(__skreturn);
}
vector_2d sprite_velocity(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib_vector_2d __skreturn = __sklib__sprite_velocity__sprite(__skparam__s);
    return __skadapter__to_vector_2d(__skreturn);
}
int sprite_visible_index_of_layer(sprite s, const string &name) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__sprite_visible_index_of_layer__sprite__string_ref(__skparam__s, __skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int sprite_visible_index_of_layer(sprite s, int id) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__id = __skadapter__to_int(id);
    int __skreturn = __sklib__sprite_visible_index_of_layer__sprite__int(__skparam__s, __skparam__id);
    return __skadapter__to_int(__skreturn);
}
int sprite_visible_layer(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skreturn = __sklib__sprite_visible_layer__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_int(__skreturn);
}
int sprite_visible_layer_count(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_visible_layer_count__sprite(__skparam__s);
    return __skadapter__to_int(__skreturn);
}
int sprite_visible_layer_id(sprite s, int idx) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__idx = __skadapter__to_int(idx);
    int __skreturn = __sklib__sprite_visible_layer_id__sprite__int(__skparam__s, __skparam__idx);
    return __skadapter__to_int(__skreturn);
}
int sprite_width(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skreturn = __sklib__sprite_width__sprite(__skparam__s);
    return __skadapter__to_int(__skreturn);
}
float sprite_x(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_x__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
float sprite_y(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skreturn = __sklib__sprite_y__sprite(__skparam__s);
    return __skadapter__to_float(__skreturn);
}
void stop_calling_on_sprite_event(sprite_event_handler *handler) {
    __sklib_sprite_event_handler *__skparam__handler = handler;
    __sklib__stop_calling_on_sprite_event__sprite_event_handler_ptr(__skparam__handler);
}
void update_all_sprites() {
    __sklib__update_all_sprites();
}
void update_all_sprites(float pct) {
    float __skparam__pct = __skadapter__to_float(pct);
    __sklib__update_all_sprites__float(__skparam__pct);
}
void update_sprite(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib__update_sprite__sprite(__skparam__s);
}
void update_sprite(sprite s, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__update_sprite__sprite__bool(__skparam__s, __skparam__with_sound);
}
void update_sprite(sprite s, float pct) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__pct = __skadapter__to_float(pct);
    __sklib__update_sprite__sprite__float(__skparam__s, __skparam__pct);
}
void update_sprite(sprite s, float pct, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__pct = __skadapter__to_float(pct);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__update_sprite__sprite__float__bool(__skparam__s, __skparam__pct, __skparam__with_sound);
}
void update_sprite_animation(sprite s) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    __sklib__update_sprite_animation__sprite(__skparam__s);
}
void update_sprite_animation(sprite s, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__update_sprite_animation__sprite__bool(__skparam__s, __skparam__with_sound);
}
void update_sprite_animation(sprite s, float pct) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__pct = __skadapter__to_float(pct);
    __sklib__update_sprite_animation__sprite__float(__skparam__s, __skparam__pct);
}
void update_sprite_animation(sprite s, float pct, bool with_sound) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    float __skparam__pct = __skadapter__to_float(pct);
    int __skparam__with_sound = __skadapter__to_int(with_sound);
    __sklib__update_sprite_animation__sprite__float__bool(__skparam__s, __skparam__pct, __skparam__with_sound);
}
vector_2d vector_from_center_sprite_to_point(sprite s, const point_2d &pt) {
    __sklib_sprite __skparam__s = __skadapter__to_sklib_sprite(s);
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    __sklib_vector_2d __skreturn = __sklib__vector_from_center_sprite_to_point__sprite__point_2d_ref(__skparam__s, __skparam__pt);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_from_to(sprite s1, sprite s2) {
    __sklib_sprite __skparam__s1 = __skadapter__to_sklib_sprite(s1);
    __sklib_sprite __skparam__s2 = __skadapter__to_sklib_sprite(s2);
    __sklib_vector_2d __skreturn = __sklib__vector_from_to__sprite__sprite(__skparam__s1, __skparam__s2);
    return __skadapter__to_vector_2d(__skreturn);
}
void activate_advanced_terminal() {
    __sklib__activate_advanced_terminal();
}
bool advanced_terminal_active() {
    int __skreturn = __sklib__advanced_terminal_active();
    return __skadapter__to_bool(__skreturn);
}
void clear_terminal() {
    __sklib__clear_terminal();
}
void end_advanced_terminal() {
    __sklib__end_advanced_terminal();
}
void move_cursor_to(int x, int y) {
    int __skparam__x = __skadapter__to_int(x);
    int __skparam__y = __skadapter__to_int(y);
    __sklib__move_cursor_to__int__int(__skparam__x, __skparam__y);
}
char read_char() {
    char __skreturn = __sklib__read_char();
    return __skadapter__to_char(__skreturn);
}
string read_line() {
    __sklib_string __skreturn = __sklib__read_line();
    return __skadapter__to_string(__skreturn);
}
void refresh_terminal() {
    __sklib__refresh_terminal();
}
void set_terminal_bold(bool value) {
    int __skparam__value = __skadapter__to_int(value);
    __sklib__set_terminal_bold__bool(__skparam__value);
}
void set_terminal_colors(color foreground, color background) {
    __sklib_color __skparam__foreground = __skadapter__to_sklib_color(foreground);
    __sklib_color __skparam__background = __skadapter__to_sklib_color(background);
    __sklib__set_terminal_colors__color__color(__skparam__foreground, __skparam__background);
}
void set_terminal_echo_input(bool value) {
    int __skparam__value = __skadapter__to_int(value);
    __sklib__set_terminal_echo_input__bool(__skparam__value);
}
int terminal_height() {
    int __skreturn = __sklib__terminal_height();
    return __skadapter__to_int(__skreturn);
}
int terminal_width() {
    int __skreturn = __sklib__terminal_width();
    return __skadapter__to_int(__skreturn);
}
void write(string text) {
    __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    __sklib__write__string(__skparam__text);
    __skadapter__free__sklib_string(__skparam__text);
}
void write_at(string text, int x, int y) {
    __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    int __skparam__x = __skadapter__to_int(x);
    int __skparam__y = __skadapter__to_int(y);
    __sklib__write_at__string__int__int(__skparam__text, __skparam__x, __skparam__y);
    __skadapter__free__sklib_string(__skparam__text);
}
void write_line() {
    __sklib__write_line();
}
void write_line(string line) {
    __sklib_string __skparam__line = __skadapter__to_sklib_string(line);
    __sklib__write_line__string(__skparam__line);
    __skadapter__free__sklib_string(__skparam__line);
}
void draw_text(const string &text, const color &clr, const string &fnt, int font_size, float x, float y) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_string __skparam__fnt = __skadapter__to_sklib_string(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__draw_text__string_ref__color_ref__string_ref__int__float__float(__skparam__text, __skparam__clr, __skparam__fnt, __skparam__font_size, __skparam__x, __skparam__y);
    __skadapter__free__sklib_string(__skparam__text);
    __skadapter__free__sklib_string(__skparam__fnt);
}
void draw_text(const string &text, const color &clr, const string &fnt, int font_size, float x, float y, const drawing_options &opts) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_string __skparam__fnt = __skadapter__to_sklib_string(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_text__string_ref__color_ref__string_ref__int__float__float__drawing_options_ref(__skparam__text, __skparam__clr, __skparam__fnt, __skparam__font_size, __skparam__x, __skparam__y, __skparam__opts);
    __skadapter__free__sklib_string(__skparam__text);
    __skadapter__free__sklib_string(__skparam__fnt);
}
void draw_text(const string &text, const color &clr, float x, float y) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__draw_text__string_ref__color_ref__float__float(__skparam__text, __skparam__clr, __skparam__x, __skparam__y);
    __skadapter__free__sklib_string(__skparam__text);
}
void draw_text(const string &text, const color &clr, float x, float y, const drawing_options &opts) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_text__string_ref__color_ref__float__float__drawing_options_ref(__skparam__text, __skparam__clr, __skparam__x, __skparam__y, __skparam__opts);
    __skadapter__free__sklib_string(__skparam__text);
}
void draw_text(const string &text, const color &clr, font fnt, int font_size, float x, float y) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib__draw_text__string_ref__color_ref__font__int__float__float(__skparam__text, __skparam__clr, __skparam__fnt, __skparam__font_size, __skparam__x, __skparam__y);
    __skadapter__free__sklib_string(__skparam__text);
}
void draw_text(const string &text, const color &clr, font fnt, int font_size, float x, float y, const drawing_options &opts) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_text__string_ref__color_ref__font__int__float__float__drawing_options_ref(__skparam__text, __skparam__clr, __skparam__fnt, __skparam__font_size, __skparam__x, __skparam__y, __skparam__opts);
    __skadapter__free__sklib_string(__skparam__text);
}
bool font_has_size(const string &name, int font_size) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__font_size = __skadapter__to_int(font_size);
    int __skreturn = __sklib__font_has_size__string_ref__int(__skparam__name, __skparam__font_size);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool font_has_size(font fnt, int font_size) {
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    int __skreturn = __sklib__font_has_size__font__int(__skparam__fnt, __skparam__font_size);
    return __skadapter__to_bool(__skreturn);
}
void font_load_size(const string &name, int font_size) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__font_size = __skadapter__to_int(font_size);
    __sklib__font_load_size__string_ref__int(__skparam__name, __skparam__font_size);
    __skadapter__free__sklib_string(__skparam__name);
}
void font_load_size(font fnt, int font_size) {
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    __sklib__font_load_size__font__int(__skparam__fnt, __skparam__font_size);
}
font font_named(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_font __skreturn = __sklib__font_named__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_font(__skreturn);
}
void free_all_fonts() {
    __sklib__free_all_fonts();
}
void free_font(font fnt) {
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    __sklib__free_font__font(__skparam__fnt);
}
font_style get_font_style(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__get_font_style__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_font_style(__skreturn);
}
font_style get_font_style(font fnt) {
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skreturn = __sklib__get_font_style__font(__skparam__fnt);
    return __skadapter__to_font_style(__skreturn);
}
bool has_font(font fnt) {
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skreturn = __sklib__has_font__font(__skparam__fnt);
    return __skadapter__to_bool(__skreturn);
}
bool has_font(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_font__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
font load_font(const string &name, const string &filename) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib_font __skreturn = __sklib__load_font__string_ref__string_ref(__skparam__name, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_font(__skreturn);
}
void set_font_style(const string &name, font_style style) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__style = __skadapter__to_int(style);
    __sklib__set_font_style__string_ref__font_style(__skparam__name, __skparam__style);
    __skadapter__free__sklib_string(__skparam__name);
}
void set_font_style(font fnt, font_style style) {
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__style = __skadapter__to_int(style);
    __sklib__set_font_style__font__font_style(__skparam__fnt, __skparam__style);
}
int text_height(const string &text, const string &fnt, int font_size) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_string __skparam__fnt = __skadapter__to_sklib_string(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    int __skreturn = __sklib__text_height__string_ref__string_ref__int(__skparam__text, __skparam__fnt, __skparam__font_size);
    __skadapter__free__sklib_string(__skparam__text);
    __skadapter__free__sklib_string(__skparam__fnt);
    return __skadapter__to_int(__skreturn);
}
int text_height(const string &text, font fnt, int font_size) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    int __skreturn = __sklib__text_height__string_ref__font__int(__skparam__text, __skparam__fnt, __skparam__font_size);
    __skadapter__free__sklib_string(__skparam__text);
    return __skadapter__to_int(__skreturn);
}
int text_width(const string &text, const string &fnt, int font_size) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    const __sklib_string __skparam__fnt = __skadapter__to_sklib_string(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    int __skreturn = __sklib__text_width__string_ref__string_ref__int(__skparam__text, __skparam__fnt, __skparam__font_size);
    __skadapter__free__sklib_string(__skparam__text);
    __skadapter__free__sklib_string(__skparam__fnt);
    return __skadapter__to_int(__skreturn);
}
int text_width(const string &text, font fnt, int font_size) {
    const __sklib_string __skparam__text = __skadapter__to_sklib_string(text);
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    int __skreturn = __sklib__text_width__string_ref__font__int(__skparam__text, __skparam__fnt, __skparam__font_size);
    __skadapter__free__sklib_string(__skparam__text);
    return __skadapter__to_int(__skreturn);
}
void draw_collected_text(color clr, font fnt, int font_size, const drawing_options &opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib_font __skparam__fnt = __skadapter__to_sklib_font(fnt);
    int __skparam__font_size = __skadapter__to_int(font_size);
    const __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_collected_text__color__font__int__drawing_options_ref(__skparam__clr, __skparam__fnt, __skparam__font_size, __skparam__opts);
}
void end_reading_text() {
    __sklib__end_reading_text();
}
void end_reading_text(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib__end_reading_text__window(__skparam__wind);
}
bool reading_text() {
    int __skreturn = __sklib__reading_text();
    return __skadapter__to_bool(__skreturn);
}
bool reading_text(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    int __skreturn = __sklib__reading_text__window(__skparam__wind);
    return __skadapter__to_bool(__skreturn);
}
void start_reading_text(rectangle rect) {
    __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib__start_reading_text__rectangle(__skparam__rect);
}
void start_reading_text(rectangle rect, string initial_text) {
    __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_string __skparam__initial_text = __skadapter__to_sklib_string(initial_text);
    __sklib__start_reading_text__rectangle__string(__skparam__rect, __skparam__initial_text);
    __skadapter__free__sklib_string(__skparam__initial_text);
}
void start_reading_text(window wind, rectangle rect) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib__start_reading_text__window__rectangle(__skparam__wind, __skparam__rect);
}
void start_reading_text(window wind, rectangle rect, string initial_text) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_string __skparam__initial_text = __skadapter__to_sklib_string(initial_text);
    __sklib__start_reading_text__window__rectangle__string(__skparam__wind, __skparam__rect, __skparam__initial_text);
    __skadapter__free__sklib_string(__skparam__initial_text);
}
bool text_entry_cancelled() {
    int __skreturn = __sklib__text_entry_cancelled();
    return __skadapter__to_bool(__skreturn);
}
bool text_entry_cancelled(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    int __skreturn = __sklib__text_entry_cancelled__window(__skparam__wind);
    return __skadapter__to_bool(__skreturn);
}
string text_input() {
    __sklib_string __skreturn = __sklib__text_input();
    return __skadapter__to_string(__skreturn);
}
string text_input(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_string __skreturn = __sklib__text_input__window(__skparam__wind);
    return __skadapter__to_string(__skreturn);
}
timer create_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_timer __skreturn = __sklib__create_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_timer(__skreturn);
}
void free_all_timers() {
    __sklib__free_all_timers();
}
void free_timer(timer to_free) {
    __sklib_timer __skparam__to_free = __skadapter__to_sklib_timer(to_free);
    __sklib__free_timer__timer(__skparam__to_free);
}
bool has_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__has_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
void pause_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__pause_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void pause_timer(timer to_pause) {
    __sklib_timer __skparam__to_pause = __skadapter__to_sklib_timer(to_pause);
    __sklib__pause_timer__timer(__skparam__to_pause);
}
void reset_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__reset_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void reset_timer(timer tmr) {
    __sklib_timer __skparam__tmr = __skadapter__to_sklib_timer(tmr);
    __sklib__reset_timer__timer(__skparam__tmr);
}
void resume_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__resume_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void resume_timer(timer to_resume) {
    __sklib_timer __skparam__to_resume = __skadapter__to_sklib_timer(to_resume);
    __sklib__resume_timer__timer(__skparam__to_resume);
}
void start_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__start_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void start_timer(timer to_start) {
    __sklib_timer __skparam__to_start = __skadapter__to_sklib_timer(to_start);
    __sklib__start_timer__timer(__skparam__to_start);
}
void stop_timer(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__stop_timer__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void stop_timer(timer to_stop) {
    __sklib_timer __skparam__to_stop = __skadapter__to_sklib_timer(to_stop);
    __sklib__stop_timer__timer(__skparam__to_stop);
}
timer timer_named(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_timer __skreturn = __sklib__timer_named__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_timer(__skreturn);
}
bool timer_paused(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__timer_paused__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool timer_paused(timer to_get) {
    __sklib_timer __skparam__to_get = __skadapter__to_sklib_timer(to_get);
    int __skreturn = __sklib__timer_paused__timer(__skparam__to_get);
    return __skadapter__to_bool(__skreturn);
}
bool timer_started(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__timer_started__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool timer_started(timer to_get) {
    __sklib_timer __skparam__to_get = __skadapter__to_sklib_timer(to_get);
    int __skreturn = __sklib__timer_started__timer(__skparam__to_get);
    return __skadapter__to_bool(__skreturn);
}
unsigned int timer_ticks(string name) {
    __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    unsigned int __skreturn = __sklib__timer_ticks__string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_unsigned_int(__skreturn);
}
unsigned int timer_ticks(timer to_get) {
    __sklib_timer __skparam__to_get = __skadapter__to_sklib_timer(to_get);
    unsigned int __skreturn = __sklib__timer_ticks__timer(__skparam__to_get);
    return __skadapter__to_unsigned_int(__skreturn);
}
void draw_triangle(color clr, const triangle &tri) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib__draw_triangle__color__triangle_ref(__skparam__clr, __skparam__tri);
}
void draw_triangle(color clr, const triangle &tri, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_triangle__color__triangle_ref__drawing_options(__skparam__clr, __skparam__tri, __skparam__opts);
}
void draw_triangle(color clr, float x1, float y1, float x2, float y2, float x3, float y3) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    float __skparam__x3 = __skadapter__to_float(x3);
    float __skparam__y3 = __skadapter__to_float(y3);
    __sklib__draw_triangle__color__float__float__float__float__float__float(__skparam__clr, __skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2, __skparam__x3, __skparam__y3);
}
void draw_triangle(color clr, float x1, float y1, float x2, float y2, float x3, float y3, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    float __skparam__x3 = __skadapter__to_float(x3);
    float __skparam__y3 = __skadapter__to_float(y3);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__draw_triangle__color__float__float__float__float__float__float__drawing_options(__skparam__clr, __skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2, __skparam__x3, __skparam__y3, __skparam__opts);
}
void fill_triangle(color clr, const triangle &tri) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib__fill_triangle__color__triangle_ref(__skparam__clr, __skparam__tri);
}
void fill_triangle(color clr, const triangle &tri, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_triangle__color__triangle_ref__drawing_options(__skparam__clr, __skparam__tri, __skparam__opts);
}
void fill_triangle(color clr, float x1, float y1, float x2, float y2, float x3, float y3) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    float __skparam__x3 = __skadapter__to_float(x3);
    float __skparam__y3 = __skadapter__to_float(y3);
    __sklib__fill_triangle__color__float__float__float__float__float__float(__skparam__clr, __skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2, __skparam__x3, __skparam__y3);
}
void fill_triangle(color clr, float x1, float y1, float x2, float y2, float x3, float y3, drawing_options opts) {
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    float __skparam__x3 = __skadapter__to_float(x3);
    float __skparam__y3 = __skadapter__to_float(y3);
    __sklib_drawing_options __skparam__opts = __skadapter__to_sklib_drawing_options(opts);
    __sklib__fill_triangle__color__float__float__float__float__float__float__drawing_options(__skparam__clr, __skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2, __skparam__x3, __skparam__y3, __skparam__opts);
}
point_2d triangle_barycenter(const triangle &tri) {
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib_point_2d __skreturn = __sklib__triangle_barycenter__triangle_ref(__skparam__tri);
    return __skadapter__to_point_2d(__skreturn);
}
triangle triangle_from(const point_2d &p1, const point_2d &p2, const point_2d &p3) {
    const __sklib_point_2d __skparam__p1 = __skadapter__to_sklib_point_2d(p1);
    const __sklib_point_2d __skparam__p2 = __skadapter__to_sklib_point_2d(p2);
    const __sklib_point_2d __skparam__p3 = __skadapter__to_sklib_point_2d(p3);
    __sklib_triangle __skreturn = __sklib__triangle_from__point_2d_ref__point_2d_ref__point_2d_ref(__skparam__p1, __skparam__p2, __skparam__p3);
    return __skadapter__to_triangle(__skreturn);
}
triangle triangle_from(float x1, float y1, float x2, float y2, float x3, float y3) {
    float __skparam__x1 = __skadapter__to_float(x1);
    float __skparam__y1 = __skadapter__to_float(y1);
    float __skparam__x2 = __skadapter__to_float(x2);
    float __skparam__y2 = __skadapter__to_float(y2);
    float __skparam__x3 = __skadapter__to_float(x3);
    float __skparam__y3 = __skadapter__to_float(y3);
    __sklib_triangle __skreturn = __sklib__triangle_from__float__float__float__float__float__float(__skparam__x1, __skparam__y1, __skparam__x2, __skparam__y2, __skparam__x3, __skparam__y3);
    return __skadapter__to_triangle(__skreturn);
}
bool triangle_rectangle_intersect(const triangle &tri, const rectangle &rect) {
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__triangle_rectangle_intersect__triangle_ref__rectangle_ref(__skparam__tri, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
string triangle_to_string(const triangle &tri) {
    const __sklib_triangle __skparam__tri = __skadapter__to_sklib_triangle(tri);
    __sklib_string __skreturn = __sklib__triangle_to_string__triangle_ref(__skparam__tri);
    return __skadapter__to_string(__skreturn);
}
bool triangles_intersect(const triangle &t1, const triangle &t2) {
    const __sklib_triangle __skparam__t1 = __skadapter__to_sklib_triangle(t1);
    const __sklib_triangle __skparam__t2 = __skadapter__to_sklib_triangle(t2);
    int __skreturn = __sklib__triangles_intersect__triangle_ref__triangle_ref(__skparam__t1, __skparam__t2);
    return __skadapter__to_bool(__skreturn);
}
unsigned int current_ticks() {
    unsigned int __skreturn = __sklib__current_ticks();
    return __skadapter__to_unsigned_int(__skreturn);
}
void delay(unsigned int milliseconds) {
    unsigned int __skparam__milliseconds = __skadapter__to_unsigned_int(milliseconds);
    __sklib__delay__unsigned_int(__skparam__milliseconds);
}
string file_as_string(string filename, resource_kind kind) {
    __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    int __skparam__kind = __skadapter__to_int(kind);
    __sklib_string __skreturn = __sklib__file_as_string__string__resource_kind(__skparam__filename, __skparam__kind);
    __skadapter__free__sklib_string(__skparam__filename);
    return __skadapter__to_string(__skreturn);
}
float angle_between(const vector_2d &v1, const vector_2d &v2) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    const __sklib_vector_2d __skparam__v2 = __skadapter__to_sklib_vector_2d(v2);
    float __skreturn = __sklib__angle_between__vector_2d_ref__vector_2d_ref(__skparam__v1, __skparam__v2);
    return __skadapter__to_float(__skreturn);
}
float dot_product(const vector_2d &v1, const vector_2d &v2) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    const __sklib_vector_2d __skparam__v2 = __skadapter__to_sklib_vector_2d(v2);
    float __skreturn = __sklib__dot_product__vector_2d_ref__vector_2d_ref(__skparam__v1, __skparam__v2);
    return __skadapter__to_float(__skreturn);
}
bool is_zero_vector(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    int __skreturn = __sklib__is_zero_vector__vector_2d_ref(__skparam__v);
    return __skadapter__to_bool(__skreturn);
}
bool ray_intersection_point(const point_2d &from_pt, const vector_2d &heading, const line &l, point_2d &pt) {
    const __sklib_point_2d __skparam__from_pt = __skadapter__to_sklib_point_2d(from_pt);
    const __sklib_vector_2d __skparam__heading = __skadapter__to_sklib_vector_2d(heading);
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    int __skreturn = __sklib__ray_intersection_point__point_2d_ref__vector_2d_ref__line_ref__point_2d_ref(__skparam__from_pt, __skparam__heading, __skparam__l, &__skparam__pt);
    pt = __skadapter__to_point_2d(__skparam__pt);
    return __skadapter__to_bool(__skreturn);
}
vector_2d unit_vector(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    __sklib_vector_2d __skreturn = __sklib__unit_vector__vector_2d_ref(__skparam__v);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_add(const vector_2d &v1, const vector_2d &v2) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    const __sklib_vector_2d __skparam__v2 = __skadapter__to_sklib_vector_2d(v2);
    __sklib_vector_2d __skreturn = __sklib__vector_add__vector_2d_ref__vector_2d_ref(__skparam__v1, __skparam__v2);
    return __skadapter__to_vector_2d(__skreturn);
}
float vector_angle(const vector_2d v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    float __skreturn = __sklib__vector_angle__vector_2d(__skparam__v);
    return __skadapter__to_float(__skreturn);
}
vector_2d vector_from_angle(float angle, float magnitude) {
    float __skparam__angle = __skadapter__to_float(angle);
    float __skparam__magnitude = __skadapter__to_float(magnitude);
    __sklib_vector_2d __skreturn = __sklib__vector_from_angle__float__float(__skparam__angle, __skparam__magnitude);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_from_line(const line &l) {
    const __sklib_line __skparam__l = __skadapter__to_sklib_line(l);
    __sklib_vector_2d __skreturn = __sklib__vector_from_line__line_ref(__skparam__l);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_from_point_to_rect(const point_2d &pt, const rectangle &rect) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    __sklib_vector_2d __skreturn = __sklib__vector_from_point_to_rect__point_2d_ref__rectangle_ref(__skparam__pt, __skparam__rect);
    return __skadapter__to_vector_2d(__skreturn);
}
bool vector_in_rect(const vector_2d &v, const rectangle &rect) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    int __skreturn = __sklib__vector_in_rect__vector_2d_ref__rectangle_ref(__skparam__v, __skparam__rect);
    return __skadapter__to_bool(__skreturn);
}
vector_2d vector_invert(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    __sklib_vector_2d __skreturn = __sklib__vector_invert__vector_2d_ref(__skparam__v);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_limit(const vector_2d &v, float limit) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    float __skparam__limit = __skadapter__to_float(limit);
    __sklib_vector_2d __skreturn = __sklib__vector_limit__vector_2d_ref__float(__skparam__v, __skparam__limit);
    return __skadapter__to_vector_2d(__skreturn);
}
float vector_magnitude(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    float __skreturn = __sklib__vector_magnitude__vector_2d_ref(__skparam__v);
    return __skadapter__to_float(__skreturn);
}
float vector_magnitude_sqared(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    float __skreturn = __sklib__vector_magnitude_sqared__vector_2d_ref(__skparam__v);
    return __skadapter__to_float(__skreturn);
}
vector_2d vector_multiply(const vector_2d &v1, float s) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    float __skparam__s = __skadapter__to_float(s);
    __sklib_vector_2d __skreturn = __sklib__vector_multiply__vector_2d_ref__float(__skparam__v1, __skparam__s);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_normal(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    __sklib_vector_2d __skreturn = __sklib__vector_normal__vector_2d_ref(__skparam__v);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_out_of_circle_from_circle(const circle &src, const circle &bounds, const vector_2d &velocity) {
    const __sklib_circle __skparam__src = __skadapter__to_sklib_circle(src);
    const __sklib_circle __skparam__bounds = __skadapter__to_sklib_circle(bounds);
    const __sklib_vector_2d __skparam__velocity = __skadapter__to_sklib_vector_2d(velocity);
    __sklib_vector_2d __skreturn = __sklib__vector_out_of_circle_from_circle__circle_ref__circle_ref__vector_2d_ref(__skparam__src, __skparam__bounds, __skparam__velocity);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_out_of_circle_from_point(const point_2d &pt, const circle &c, const vector_2d &velocity) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    const __sklib_vector_2d __skparam__velocity = __skadapter__to_sklib_vector_2d(velocity);
    __sklib_vector_2d __skreturn = __sklib__vector_out_of_circle_from_point__point_2d_ref__circle_ref__vector_2d_ref(__skparam__pt, __skparam__c, __skparam__velocity);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_out_of_rect_from_circle(const circle &c, const rectangle &rect, const vector_2d &velocity) {
    const __sklib_circle __skparam__c = __skadapter__to_sklib_circle(c);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    const __sklib_vector_2d __skparam__velocity = __skadapter__to_sklib_vector_2d(velocity);
    __sklib_vector_2d __skreturn = __sklib__vector_out_of_rect_from_circle__circle_ref__rectangle_ref__vector_2d_ref(__skparam__c, __skparam__rect, __skparam__velocity);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_out_of_rect_from_point(const point_2d &pt, const rectangle &rect, const vector_2d &velocity) {
    const __sklib_point_2d __skparam__pt = __skadapter__to_sklib_point_2d(pt);
    const __sklib_rectangle __skparam__rect = __skadapter__to_sklib_rectangle(rect);
    const __sklib_vector_2d __skparam__velocity = __skadapter__to_sklib_vector_2d(velocity);
    __sklib_vector_2d __skreturn = __sklib__vector_out_of_rect_from_point__point_2d_ref__rectangle_ref__vector_2d_ref(__skparam__pt, __skparam__rect, __skparam__velocity);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_out_of_rect_from_rect(const rectangle &src, const rectangle &bounds, const vector_2d &velocity) {
    const __sklib_rectangle __skparam__src = __skadapter__to_sklib_rectangle(src);
    const __sklib_rectangle __skparam__bounds = __skadapter__to_sklib_rectangle(bounds);
    const __sklib_vector_2d __skparam__velocity = __skadapter__to_sklib_vector_2d(velocity);
    __sklib_vector_2d __skreturn = __sklib__vector_out_of_rect_from_rect__rectangle_ref__rectangle_ref__vector_2d_ref(__skparam__src, __skparam__bounds, __skparam__velocity);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_point_to_point(const point_2d &start, const point_2d &end_pt) {
    const __sklib_point_2d __skparam__start = __skadapter__to_sklib_point_2d(start);
    const __sklib_point_2d __skparam__end_pt = __skadapter__to_sklib_point_2d(end_pt);
    __sklib_vector_2d __skreturn = __sklib__vector_point_to_point__point_2d_ref__point_2d_ref(__skparam__start, __skparam__end_pt);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_subtract(const vector_2d &v1, const vector_2d &v2) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    const __sklib_vector_2d __skparam__v2 = __skadapter__to_sklib_vector_2d(v2);
    __sklib_vector_2d __skreturn = __sklib__vector_subtract__vector_2d_ref__vector_2d_ref(__skparam__v1, __skparam__v2);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_to(const point_2d &p1) {
    const __sklib_point_2d __skparam__p1 = __skadapter__to_sklib_point_2d(p1);
    __sklib_vector_2d __skreturn = __sklib__vector_to__point_2d_ref(__skparam__p1);
    return __skadapter__to_vector_2d(__skreturn);
}
vector_2d vector_to(float x, float y) {
    float __skparam__x = __skadapter__to_float(x);
    float __skparam__y = __skadapter__to_float(y);
    __sklib_vector_2d __skreturn = __sklib__vector_to__float__float(__skparam__x, __skparam__y);
    return __skadapter__to_vector_2d(__skreturn);
}
string vector_to_string(const vector_2d &v) {
    const __sklib_vector_2d __skparam__v = __skadapter__to_sklib_vector_2d(v);
    __sklib_string __skreturn = __sklib__vector_to_string__vector_2d_ref(__skparam__v);
    return __skadapter__to_string(__skreturn);
}
bool vectors_equal(const vector_2d &v1, const vector_2d v2) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    const __sklib_vector_2d __skparam__v2 = __skadapter__to_sklib_vector_2d(v2);
    int __skreturn = __sklib__vectors_equal__vector_2d_ref__vector_2d(__skparam__v1, __skparam__v2);
    return __skadapter__to_bool(__skreturn);
}
bool vectors_not_equal(const vector_2d &v1, const vector_2d v2) {
    const __sklib_vector_2d __skparam__v1 = __skadapter__to_sklib_vector_2d(v1);
    const __sklib_vector_2d __skparam__v2 = __skadapter__to_sklib_vector_2d(v2);
    int __skreturn = __sklib__vectors_not_equal__vector_2d_ref__vector_2d(__skparam__v1, __skparam__v2);
    return __skadapter__to_bool(__skreturn);
}
bitmap download_bitmap(const string &name, const string &url, unsigned short port) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_bitmap __skreturn = __sklib__download_bitmap__string_ref__string_ref__unsigned_short(__skparam__name, __skparam__url, __skparam__port);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__url);
    return __skadapter__to_bitmap(__skreturn);
}
font download_font(const string &name, const string &url, unsigned short port) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_font __skreturn = __sklib__download_font__string_ref__string_ref__unsigned_short(__skparam__name, __skparam__url, __skparam__port);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__url);
    return __skadapter__to_font(__skreturn);
}
music download_music(const string &name, const string &url, unsigned short port) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_music __skreturn = __sklib__download_music__string_ref__string_ref__unsigned_short(__skparam__name, __skparam__url, __skparam__port);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__url);
    return __skadapter__to_music(__skreturn);
}
sound_effect download_sound_effect(const string &name, const string &url, unsigned short port) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_sound_effect __skreturn = __sklib__download_sound_effect__string_ref__string_ref__unsigned_short(__skparam__name, __skparam__url, __skparam__port);
    __skadapter__free__sklib_string(__skparam__name);
    __skadapter__free__sklib_string(__skparam__url);
    return __skadapter__to_sound_effect(__skreturn);
}
void free_response(http_response response) {
    __sklib_http_response __skparam__response = __skadapter__to_sklib_http_response(response);
    __sklib__free_response__http_response(__skparam__response);
}
http_response http_get(const string &url, unsigned short port) {
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_http_response __skreturn = __sklib__http_get__string_ref__unsigned_short(__skparam__url, __skparam__port);
    __skadapter__free__sklib_string(__skparam__url);
    return __skadapter__to_http_response(__skreturn);
}
http_response http_post(const string &url, unsigned short port, const string &body, const vector<string> &headers) {
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    const __sklib_string __skparam__body = __skadapter__to_sklib_string(body);
    const __sklib_vector_string __skparam__headers = __skadapter__to_sklib_vector_string(headers);
    __sklib_http_response __skreturn = __sklib__http_post__string_ref__unsigned_short__string_ref__vector_string_ref(__skparam__url, __skparam__port, __skparam__body, __skparam__headers);
    __skadapter__free__sklib_string(__skparam__url);
    __skadapter__free__sklib_string(__skparam__body);
    __skadapter__free__sklib_vector_string(__skparam__headers);
    return __skadapter__to_http_response(__skreturn);
}
http_response http_post(const string &url, unsigned short port, string body) {
    const __sklib_string __skparam__url = __skadapter__to_sklib_string(url);
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_string __skparam__body = __skadapter__to_sklib_string(body);
    __sklib_http_response __skreturn = __sklib__http_post__string_ref__unsigned_short__string(__skparam__url, __skparam__port, __skparam__body);
    __skadapter__free__sklib_string(__skparam__url);
    __skadapter__free__sklib_string(__skparam__body);
    return __skadapter__to_http_response(__skreturn);
}
string http_response_to_string(http_response response) {
    __sklib_http_response __skparam__response = __skadapter__to_sklib_http_response(response);
    __sklib_string __skreturn = __sklib__http_response_to_string__http_response(__skparam__response);
    return __skadapter__to_string(__skreturn);
}
void save_response_to_file(http_response response, string path) {
    __sklib_http_response __skparam__response = __skadapter__to_sklib_http_response(response);
    __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    __sklib__save_response_to_file__http_response__string(__skparam__response, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
}
bool has_incoming_requests(web_server server) {
    __sklib_web_server __skparam__server = __skadapter__to_sklib_web_server(server);
    int __skreturn = __sklib__has_incoming_requests__web_server(__skparam__server);
    return __skadapter__to_bool(__skreturn);
}
bool is_delete_request_for(http_request request, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_delete_request_for__http_request__string_ref(__skparam__request, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
bool is_get_request_for(http_request request, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_get_request_for__http_request__string_ref(__skparam__request, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
bool is_options_request_for(http_request request, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_options_request_for__http_request__string_ref(__skparam__request, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
bool is_post_request_for(http_request request, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_post_request_for__http_request__string_ref(__skparam__request, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
bool is_put_request_for(http_request request, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_put_request_for__http_request__string_ref(__skparam__request, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
bool is_request_for(http_request request, http_method method, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    int __skparam__method = __skadapter__to_int(method);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_request_for__http_request__http_method__string_ref(__skparam__request, __skparam__method, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
bool is_trace_request_for(http_request request, const string &path) {
    __sklib_http_request __skparam__request = __skadapter__to_sklib_http_request(request);
    const __sklib_string __skparam__path = __skadapter__to_sklib_string(path);
    int __skreturn = __sklib__is_trace_request_for__http_request__string_ref(__skparam__request, __skparam__path);
    __skadapter__free__sklib_string(__skparam__path);
    return __skadapter__to_bool(__skreturn);
}
http_request next_web_request(web_server server) {
    __sklib_web_server __skparam__server = __skadapter__to_sklib_web_server(server);
    __sklib_http_request __skreturn = __sklib__next_web_request__web_server(__skparam__server);
    return __skadapter__to_http_request(__skreturn);
}
string request_body(http_request r) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    __sklib_string __skreturn = __sklib__request_body__http_request(__skparam__r);
    return __skadapter__to_string(__skreturn);
}
http_method request_method(http_request r) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    int __skreturn = __sklib__request_method__http_request(__skparam__r);
    return __skadapter__to_http_method(__skreturn);
}
string request_uri(http_request r) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    __sklib_string __skreturn = __sklib__request_uri__http_request(__skparam__r);
    return __skadapter__to_string(__skreturn);
}
vector<string> request_uri_stubs(http_request r) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    __sklib_vector_string __skreturn = __sklib__request_uri_stubs__http_request(__skparam__r);
    return __skadapter__to_vector_string(__skreturn);
}
void send_html_file_response(http_request r, const string &filename) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    const __sklib_string __skparam__filename = __skadapter__to_sklib_string(filename);
    __sklib__send_html_file_response__http_request__string_ref(__skparam__r, __skparam__filename);
    __skadapter__free__sklib_string(__skparam__filename);
}
void send_response(http_request r) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    __sklib__send_response__http_request(__skparam__r);
}
void send_response(http_request r, const string &message) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    const __sklib_string __skparam__message = __skadapter__to_sklib_string(message);
    __sklib__send_response__http_request__string_ref(__skparam__r, __skparam__message);
    __skadapter__free__sklib_string(__skparam__message);
}
void send_response(http_request r, http_status_code code) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    int __skparam__code = __skadapter__to_int(code);
    __sklib__send_response__http_request__http_status_code(__skparam__r, __skparam__code);
}
void send_response(http_request r, http_status_code code, const string &message) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    int __skparam__code = __skadapter__to_int(code);
    const __sklib_string __skparam__message = __skadapter__to_sklib_string(message);
    __sklib__send_response__http_request__http_status_code__string_ref(__skparam__r, __skparam__code, __skparam__message);
    __skadapter__free__sklib_string(__skparam__message);
}
void send_response(http_request r, http_status_code code, const string &message, const string &content_type) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    int __skparam__code = __skadapter__to_int(code);
    const __sklib_string __skparam__message = __skadapter__to_sklib_string(message);
    const __sklib_string __skparam__content_type = __skadapter__to_sklib_string(content_type);
    __sklib__send_response__http_request__http_status_code__string_ref__string_ref(__skparam__r, __skparam__code, __skparam__message, __skparam__content_type);
    __skadapter__free__sklib_string(__skparam__message);
    __skadapter__free__sklib_string(__skparam__content_type);
}
void send_response(http_request r, json j) {
    __sklib_http_request __skparam__r = __skadapter__to_sklib_http_request(r);
    __sklib_json __skparam__j = __skadapter__to_sklib_json(j);
    __sklib__send_response__http_request__json(__skparam__r, __skparam__j);
}
vector<string> split_uri_stubs(const string &uri) {
    const __sklib_string __skparam__uri = __skadapter__to_sklib_string(uri);
    __sklib_vector_string __skreturn = __sklib__split_uri_stubs__string_ref(__skparam__uri);
    __skadapter__free__sklib_string(__skparam__uri);
    return __skadapter__to_vector_string(__skreturn);
}
web_server start_web_server() {
    __sklib_web_server __skreturn = __sklib__start_web_server();
    return __skadapter__to_web_server(__skreturn);
}
web_server start_web_server(unsigned short port) {
    unsigned short __skparam__port = __skadapter__to_unsigned_short(port);
    __sklib_web_server __skreturn = __sklib__start_web_server__unsigned_short(__skparam__port);
    return __skadapter__to_web_server(__skreturn);
}
void stop_web_server(web_server server) {
    __sklib_web_server __skparam__server = __skadapter__to_sklib_web_server(server);
    __sklib__stop_web_server__web_server(__skparam__server);
}
void clear_window(window wind, color clr) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_color __skparam__clr = __skadapter__to_sklib_color(clr);
    __sklib__clear_window__window__color(__skparam__wind, __skparam__clr);
}
void close_all_windows() {
    __sklib__close_all_windows();
}
void close_window(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__close_window__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void close_window() {
    __sklib__close_window();
}
void close_window(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib__close_window__window(__skparam__wind);
}
window current_window() {
    __sklib_window __skreturn = __sklib__current_window();
    return __skadapter__to_window(__skreturn);
}
bool has_window(string caption) {
    __sklib_string __skparam__caption = __skadapter__to_sklib_string(caption);
    int __skreturn = __sklib__has_window__string(__skparam__caption);
    __skadapter__free__sklib_string(__skparam__caption);
    return __skadapter__to_bool(__skreturn);
}
void move_window(int x, int y) {
    int __skparam__x = __skadapter__to_int(x);
    int __skparam__y = __skadapter__to_int(y);
    __sklib__move_window__int__int(__skparam__x, __skparam__y);
}
void move_window(const string &name, int x, int y) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skparam__x = __skadapter__to_int(x);
    int __skparam__y = __skadapter__to_int(y);
    __sklib__move_window__string_ref__int__int(__skparam__name, __skparam__x, __skparam__y);
    __skadapter__free__sklib_string(__skparam__name);
}
void move_window(window wind, int x, int y) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    int __skparam__x = __skadapter__to_int(x);
    int __skparam__y = __skadapter__to_int(y);
    __sklib__move_window__window__int__int(__skparam__wind, __skparam__x, __skparam__y);
}
window open_window(string caption, int width, int height) {
    __sklib_string __skparam__caption = __skadapter__to_sklib_string(caption);
    int __skparam__width = __skadapter__to_int(width);
    int __skparam__height = __skadapter__to_int(height);
    __sklib_window __skreturn = __sklib__open_window__string__int__int(__skparam__caption, __skparam__width, __skparam__height);
    __skadapter__free__sklib_string(__skparam__caption);
    return __skadapter__to_window(__skreturn);
}
void refresh_window(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib__refresh_window__window(__skparam__wind);
}
void resize_window(int width, int height) {
    int __skparam__width = __skadapter__to_int(width);
    int __skparam__height = __skadapter__to_int(height);
    __sklib__resize_window__int__int(__skparam__width, __skparam__height);
}
void resize_window(window wnd, int width, int height) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    int __skparam__width = __skadapter__to_int(width);
    int __skparam__height = __skadapter__to_int(height);
    __sklib__resize_window__window__int__int(__skparam__wnd, __skparam__width, __skparam__height);
}
void set_current_window(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__set_current_window__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void set_current_window(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib__set_current_window__window(__skparam__wind);
}
bool window_close_requested(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_close_requested__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool window_close_requested(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    int __skreturn = __sklib__window_close_requested__window(__skparam__wind);
    return __skadapter__to_bool(__skreturn);
}
bool window_has_border() {
    int __skreturn = __sklib__window_has_border();
    return __skadapter__to_bool(__skreturn);
}
bool window_has_border(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_has_border__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool window_has_border(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    int __skreturn = __sklib__window_has_border__window(__skparam__wnd);
    return __skadapter__to_bool(__skreturn);
}
int window_height() {
    int __skreturn = __sklib__window_height();
    return __skadapter__to_int(__skreturn);
}
int window_height(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_height__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int window_height(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    int __skreturn = __sklib__window_height__window(__skparam__wind);
    return __skadapter__to_int(__skreturn);
}
bool window_is_fullscreen() {
    int __skreturn = __sklib__window_is_fullscreen();
    return __skadapter__to_bool(__skreturn);
}
bool window_is_fullscreen(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_is_fullscreen__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_bool(__skreturn);
}
bool window_is_fullscreen(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    int __skreturn = __sklib__window_is_fullscreen__window(__skparam__wnd);
    return __skadapter__to_bool(__skreturn);
}
window window_named(string caption) {
    __sklib_string __skparam__caption = __skadapter__to_sklib_string(caption);
    __sklib_window __skreturn = __sklib__window_named__string(__skparam__caption);
    __skadapter__free__sklib_string(__skparam__caption);
    return __skadapter__to_window(__skreturn);
}
point_2d window_position() {
    __sklib_point_2d __skreturn = __sklib__window_position();
    return __skadapter__to_point_2d(__skreturn);
}
point_2d window_position(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib_point_2d __skreturn = __sklib__window_position__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_point_2d(__skreturn);
}
point_2d window_position(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    __sklib_point_2d __skreturn = __sklib__window_position__window(__skparam__wnd);
    return __skadapter__to_point_2d(__skreturn);
}
void window_set_icon(window wind, bitmap bmp) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    __sklib_bitmap __skparam__bmp = __skadapter__to_sklib_bitmap(bmp);
    __sklib__window_set_icon__window__bitmap(__skparam__wind, __skparam__bmp);
}
void window_toggle_border() {
    __sklib__window_toggle_border();
}
void window_toggle_border(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__window_toggle_border__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void window_toggle_border(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    __sklib__window_toggle_border__window(__skparam__wnd);
}
void window_toggle_fullscreen() {
    __sklib__window_toggle_fullscreen();
}
void window_toggle_fullscreen(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    __sklib__window_toggle_fullscreen__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
}
void window_toggle_fullscreen(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    __sklib__window_toggle_fullscreen__window(__skparam__wnd);
}
int window_width() {
    int __skreturn = __sklib__window_width();
    return __skadapter__to_int(__skreturn);
}
int window_width(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_width__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int window_width(window wind) {
    __sklib_window __skparam__wind = __skadapter__to_sklib_window(wind);
    int __skreturn = __sklib__window_width__window(__skparam__wind);
    return __skadapter__to_int(__skreturn);
}
window window_with_focus() {
    __sklib_window __skreturn = __sklib__window_with_focus();
    return __skadapter__to_window(__skreturn);
}
int window_x() {
    int __skreturn = __sklib__window_x();
    return __skadapter__to_int(__skreturn);
}
int window_x(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_x__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int window_x(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    int __skreturn = __sklib__window_x__window(__skparam__wnd);
    return __skadapter__to_int(__skreturn);
}
int window_y() {
    int __skreturn = __sklib__window_y();
    return __skadapter__to_int(__skreturn);
}
int window_y(const string &name) {
    const __sklib_string __skparam__name = __skadapter__to_sklib_string(name);
    int __skreturn = __sklib__window_y__string_ref(__skparam__name);
    __skadapter__free__sklib_string(__skparam__name);
    return __skadapter__to_int(__skreturn);
}
int window_y(window wnd) {
    __sklib_window __skparam__wnd = __skadapter__to_sklib_window(wnd);
    int __skreturn = __sklib__window_y__window(__skparam__wnd);
    return __skadapter__to_int(__skreturn);
}
