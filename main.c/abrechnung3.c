/*#include <gtk/gtk.h>

// Hesaplama düğmesine tıklanınca çalışacak fonksiyon
void on_calculate_clicked(GtkWidget *widget, gpointer data) {
    GtkEntry **entries = (GtkEntry **)data;

    // Kullanıcıdan değerleri al
    const char *kassenbestand_str = gtk_entry_get_text(entries[0]);
    const char *kassiert_str = gtk_entry_get_text(entries[1]);
    const char *ec_str = gtk_entry_get_text(entries[2]);

    double kassenbestand = atof(kassenbestand_str);
    double kassiert = atof(kassiert_str);
    double ec = atof(ec_str);

    // Hesaplama
    double gesamt = kassenbestand + kassiert - ec;


    // Sonucu bir mesaj kutusunda göster
    char result[100];
    sprintf(result, "Gesamt: %.2lf", gesamt);
    GtkWidget *dialog = gtk_message_dialog_new(NULL, GTK_DIALOG_DESTROY_WITH_PARENT, GTK_MESSAGE_INFO, GTK_BUTTONS_OK, "%s", result);
    gtk_dialog_run(GTK_DIALOG(dialog));
    gtk_widget_destroy(dialog);
}

int main(int argc, char *argv[]) {
    GtkWidget *window;
    GtkWidget *grid;
    GtkWidget *calculate_button;

    // Giriş alanları
    GtkWidget *kassenbestand_entry, *kassiert_entry, *ec_entry;

    gtk_init(&argc, &argv);

    // Pencere oluştur
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Abrechnung Uygulaması");
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    gtk_window_set_default_size(GTK_WINDOW(window), 300, 200);

    // Grid (düzen) oluştur
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Giriş alanlarını ve etiketlerini ekle
    GtkWidget *kassenbestand_label = gtk_label_new("Kassenbestand:");
    kassenbestand_entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), kassenbestand_label, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), kassenbestand_entry, 1, 0, 1, 1);

    GtkWidget *kassiert_label = gtk_label_new("Kassiert:");
    kassiert_entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), kassiert_label, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), kassiert_entry, 1, 1, 1, 1);

    GtkWidget *ec_label = gtk_label_new("EC (Kart Ödemeleri):");
    ec_entry = gtk_entry_new();
    gtk_grid_attach(GTK_GRID(grid), ec_label, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), ec_entry, 1, 2, 1, 1);

    // Hesapla düğmesini ekle
    calculate_button = gtk_button_new_with_label("Hesapla");
    gtk_grid_attach(GTK_GRID(grid), calculate_button, 0, 3, 2, 1);

    // Giriş alanlarını bir diziye kaydet
    GtkEntry *entries[] = {GTK_ENTRY(kassenbestand_entry), GTK_ENTRY(kassiert_entry), GTK_ENTRY(ec_entry)};

    // Düğme tıklama sinyalini bağla
    g_signal_connect(calculate_button, "clicked", G_CALLBACK(on_calculate_clicked), entries);

    // Kapatma sinyalini bağla
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Pencereyi göster
    gtk_widget_show_all(window);

    // GTK döngüsünü başlat
    gtk_main();

    return 0;
}
*/