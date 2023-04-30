#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    // Create the main window
    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "My Window");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_widget_set_size_request(window, 200, 100);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Create a label with red text
    GtkWidget *label = gtk_label_new("Hello, world!");
    GdkRGBA color;
    gdk_rgba_parse(&color, "red");
    gtk_widget_override_color(label, GTK_STATE_FLAG_NORMAL, &color);

    // Add the label to the main window
    gtk_container_add(GTK_CONTAINER(window), label);

    // Set the window background to blue
    gdk_rgba_parse(&color, "blue");
    gtk_widget_override_background_color(window, GTK_STATE_FLAG_NORMAL, &color);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}
