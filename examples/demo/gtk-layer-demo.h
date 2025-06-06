#ifndef GTK_LAYER_DEMO_H
#define GTK_LAYER_DEMO_H

#include "gtk4-layer-shell.h"
#include <gtk/gtk.h>

typedef enum {
    WINDOW_ORIENTATION_NONE = 0,
    WINDOW_ORIENTATION_HORIZONTAL,
    WINDOW_ORIENTATION_VERTICAL,
} WindowOrientation;

typedef struct {
    gboolean edges[GTK_LAYER_SHELL_EDGE_ENTRY_NUMBER];
    WindowOrientation orientation;
    GtkWidget* toplevel_box;
    GtkWidget* first_box;
    GtkWidget* second_box;
} ToplevelData;

extern const char* anchor_edges_key;
extern const int fixed_size_width;
extern const int fixed_size_height;

void layer_window_update_orientation(GtkWindow* layer_window);

GtkWidget* layer_selection_new(GtkWindow* layer_window, GtkLayerShellLayer default_layer);

GtkWidget* monitor_selection_new(GtkWindow* layer_window);

GtkWidget* anchor_control_new(GtkWindow* layer_window, const gboolean default_anchors[GTK_LAYER_SHELL_EDGE_ENTRY_NUMBER]);

GtkWidget* margin_control_new(GtkWindow* layer_window, const int default_margins[GTK_LAYER_SHELL_EDGE_ENTRY_NUMBER]);

GtkWidget* version_info_new();

GtkWidget* mscl_toggles_new(GtkWindow* layer_window,
                  gboolean default_auto_exclusive_zone,
                  gboolean default_fixed_size);

void set_up_menubar(GtkWindow* layer_window);

GtkWidget* keyboard_selection_new(GtkWindow* layer_window, GtkLayerShellKeyboardMode default_kb);

#endif // GTK_LAYER_DEMO_H
