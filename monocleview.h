/* MonocleView - main view widget for monocle */
#ifndef __MONOCLE_VIEW_H__
#define __MONOCLE_VIEW_H__

#include <glib-object.h>
#include <gtk/gtk.h>
#include <gdk-pixbuf/gdk-pixbuf.h>

#define MONOCLE_TYPE_VIEW               (monocle_view_get_type())
#define MONOCLE_VIEW(obj)               (G_TYPE_CHECK_INSTANCE_CAST ((obj), MONOCLE_TYPE_VIEW, MonocleView))
#define MONOCLE_IS_VIEW(obj)            (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MONOCLE_TYPE_VIEW))
#define MONOCLE_VIEW_CLASS(klass)       (G_TYPE_CHECK_CLASS_CAST ((klass), MONOCLE_TYPE_VIEW, MonocleViewClass))
#define MONOCLE_IS_VIEW_CLASS(klass)    (G_TYPE_CHECK_VLASS_TYPE ((klass), MONOCLE_TYPE_VIEW))
#define MONOCLE_VIEW_GET_CLASS(obj)     (G_TYPE_INSTANCE_GET_CLASS ((obj), MONOCLE_TYPE_VIEW, MonocleViewClass))

typedef struct _MonocleView         MonocleView;
typedef struct _MonocleViewClass    MonocleViewClass;

struct _MonocleView {
    GtkLayout widget;
};

struct _MonocleViewClass {
    GtkLayoutClass parent_class;
};

GType monocle_view_get_type (void);

void monocle_view_set_image (MonocleView *self, gchar *filename);
void monocle_view_set_scale (MonocleView *self, gfloat scale);
void monocle_view_scale_image (MonocleView *self, gfloat scale);
#endif /*__MONOCLE_VIEW_H__*/
