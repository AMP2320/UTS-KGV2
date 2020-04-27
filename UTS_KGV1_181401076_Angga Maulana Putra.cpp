#include <glut.h>

float sumbu_x = 0, sumbu_y = 0, a = 0.0, b = 0.0;
int move_x = 1000, speed = 10;

void write(float x, float y, float z, void* font, const char* string)
{
    glColor3f(0, 0, 0);
    const char* c;
    glRasterPos3f(x, y, z);
    for (c = string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

void Rumah()
{
    glClear(GL_COLOR_BUFFER_BIT);

    //tembok depan
    glColor3f(1.0, 1.0, 0.0f);
    glBegin(GL_POLYGON);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();

    //tembok samping
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(300, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(300, 100);
    glEnd();

    //pintu
    glColor3f(0.3, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);
    glEnd();

    //doorknob
    glColor3ub(169, 169, 169);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2i(170, 170);
    glEnd();

    //atap depan
    glColor3f(0.25, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 500);
    glColor3f(0.5, 0.0, 0.0);
    glVertex2i(100, 350);
    glColor3ub(165, 42, 42);
    glVertex2i(300, 350);
    glEnd();

    //atap samping
    glColor3f(0.5, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(200, 500);
    glColor3ub(165, 42, 42);
    glVertex2i(600, 500);
    glColor3f(0.2, 0, 0);
    glVertex2i(700, 350);
    glVertex2i(300, 350);
    glEnd();

    //jendela 1
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2i(330, 320);
    glVertex2i(450, 320);
    glVertex2i(450, 230);
    glVertex2i(330, 230);
    glEnd();

    //bingkai jendela 1
    glColor3f(0.3, 0.0, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(390, 320);
    glVertex2i(390, 230);
    glVertex2i(330, 273);
    glVertex2i(450, 273);
    glEnd();

    //jendela 2
    glColor3ub(220, 220, 220);
    glBegin(GL_POLYGON);
    glVertex2i(530, 320);
    glVertex2i(650, 320);
    glVertex2i(650, 230);
    glVertex2i(530, 230);
    glEnd();

    //bingkai jendela 2
    glColor3f(0.3, 0.0, 0.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(590, 320);
    glVertex2i(590, 230);
    glVertex2i(530, 273);
    glVertex2i(650, 273);
    glEnd();

    //garis tembok depan
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINE_LOOP);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();

    //garis tembok samping
    glBegin(GL_LINE_LOOP);
    glVertex2i(300, 350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(300, 100);
    glEnd();

    //garis pintu
    glBegin(GL_LINE_LOOP);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);
    glEnd();

    //garis atap depan 
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glEnd();

    //garis atap samping
    glBegin(GL_LINE_LOOP);
    glVertex2i(200, 500);
    glVertex2i(600, 500);
    glVertex2i(700, 350);
    glVertex2i(300, 350);
    glEnd();

    //pagar (vertikal)
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(311, 135);
    glVertex2i(311, 0);
    glVertex2i(320, 0);
    glVertex2i(320, 135);
    glVertex2i(311, 135);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(411, 135);
    glVertex2i(411, 0);
    glVertex2i(420, 0);
    glVertex2i(420, 135);
    glVertex2i(411, 135);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(511, 135);
    glVertex2i(511, 0);
    glVertex2i(520, 0);
    glVertex2i(520, 135);
    glVertex2i(511, 135);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(611, 135);
    glVertex2i(611, 0);
    glVertex2i(620, 0);
    glVertex2i(620, 135);
    glVertex2i(611, 135);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(711, 135);
    glVertex2i(711, 0);
    glVertex2i(720, 0);
    glVertex2i(720, 135);
    glVertex2i(711, 135);
    glEnd();

    //pagar (horizontal)
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(311, 85);
    glVertex2i(411, 85);
    glVertex2i(411, 90);
    glVertex2i(311, 90);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(311, 35);
    glVertex2i(411, 35);
    glVertex2i(411, 40);
    glVertex2i(311, 40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(411, 85);
    glVertex2i(511, 85);
    glVertex2i(511, 90);
    glVertex2i(411, 90);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(411, 35);
    glVertex2i(511, 35);
    glVertex2i(511, 40);
    glVertex2i(411, 40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(511, 85);
    glVertex2i(611, 85);
    glVertex2i(611, 90);
    glVertex2i(511, 90);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(511, 35);
    glVertex2i(611, 35);
    glVertex2i(611, 40);
    glVertex2i(511, 40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(611, 85);
    glVertex2i(711, 85);
    glVertex2i(711, 90);
    glVertex2i(611, 90);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(611, 35);
    glVertex2i(711, 35);
    glVertex2i(711, 40);
    glVertex2i(611, 40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(711, 85);
    glVertex2i(811, 85);
    glVertex2i(811, 90);
    glVertex2i(711, 90);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.2, 0, 0);
    glVertex2i(711, 35);
    glVertex2i(811, 35);
    glVertex2i(811, 40);
    glVertex2i(711, 40);
    glEnd();

    //jalan
    glColor3f(0, 0, 0);
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glVertex2i(145, 98);
    glVertex2i(255, 98);
    glVertex2i(180, 0);
    glVertex2i(60, 0);
    glEnd();

    write(25.0, 575.0, 0, GLUT_BITMAP_HELVETICA_18, "Tekan B untuk menerbangkan burung.");

    glFlush();
    glutSwapBuffers();
}

void Burung() {
    glColor3f(0.73, 0.16, 0.96);
    glBegin(GL_POLYGON);
    glVertex2f(300 + a - move_x, 265 + b);
    glVertex2f(330 + a - move_x, 265 + b);
    glVertex2f(330 + a - move_x, 250 + b);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(330 + a - move_x, 275 + b);
    glVertex2f(340 + a - move_x, 275 + b);
    glVertex2f(330 + a - move_x, 265 + b);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200 + a - move_x, 285 + b);
    glVertex2f(230 + a - move_x, 285 + b);
    glVertex2f(230 + a - move_x, 270 + b);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(230 + a - move_x, 295 + b);
    glVertex2f(240 + a - move_x, 295 + b);
    glVertex2f(230 + a - move_x, 285 + b);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(150 + a - move_x, 285 + b);
    glVertex2f(180 + a - move_x, 285 + b);
    glVertex2f(180 + a - move_x, 270 + b);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(180 + a - move_x, 295 + b);
    glVertex2f(190 + a - move_x, 295 + b);
    glVertex2f(180 + a - move_x, 285 + b);
    glEnd();

    glFlush();
    glutSwapBuffers();
}

void idle() {
    a += speed / 10;
    b += speed / 10;
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
    if (key == 'b' || key == 'B') {
        a = 800;
        b = 0.0;
    }
}

void tampil() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.9, 0.9, 0.0);
    Rumah();
    Burung();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(700, 600);
    glutCreateWindow("Burung Terbang Di Atas Rumah");
    glutDisplayFunc(tampil);
    glutIdleFunc(idle);
    glutKeyboardFunc(keyboard);
    gluOrtho2D(0.0, 800.0, 0.0, 600.0);
    glutMainLoop();
}
