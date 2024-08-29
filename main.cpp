#include <GL/glut.h>
#include <windows.h>

float rotationAngle = 0.0f;
float teste = 0.0f;
float teste2 = 0.0f;
float teste3 = 0.0f;

void inicializar(){
    glClearColor(0.53f, 0.81f, 0.92f, 1.0f); // Azul céu
    glEnable(GL_DEPTH_TEST); // Ativa o teste de profundidade

    glMatrixMode(GL_PROJECTION); // Define a matriz de projeção
    glLoadIdentity();
    gluPerspective(45.0, 1.0, 1.0, 200.0); // Define a projeção em perspectiva
    gluLookAt(0.0, 0.0, 5.0, // Posição da câmera
              0.0, 0.0, 0.0, // Ponto para onde a câmera está olhando
              0.0, 1.0, 0.0); // Vetor up (cima)
}

void desenharTextoBitmap(float x, float y, char *texto) {
    glRasterPos2f(x, y); // Define a posição inicial do texto
    while (*texto) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *texto); // Renderiza cada caractere
        texto++;
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Limpa os buffers de cor e profundidade

    // montanha1
    glColor3f(0.0, 1.0, 0.0); // Cor verde
    glPushMatrix();
    glTranslatef(-1.0f/*lado e outro*/, -2/*cima baixo*/, 3.0f/*tamanho*/);
    glutSolidSphere(2.0, 50, 50);     
    glPopMatrix();
    //motanha2
    glColor3f(0.4, 1.0, 0.0); // Cor verde claro
    glPushMatrix();
    glTranslatef(1.0f/*lado e outro*/, -2/*cima baixo*/, 1.0f/*tamanho*/);
    glutSolidSphere(2.0, 50, 50);     
    glPopMatrix();
    
    
    //sol
    glColor3f(1.0, 1.0, 0.0); // Cor amarela
    glPushMatrix();
    glTranslatef(1.0f/*lado e outro*/, 1.0f/*cima baixo*/, -7.0f/*tamanho*/);
    glutSolidSphere(2.0, 50, 50);     
    glPopMatrix();
    
    
    //parte baixo carro
    glColor3f(1.0f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); // Começa a desenhar um quadrilátero
        glVertex2f(-0.1f, 0.1f); // Vértice inferior esquerdo
        glVertex2f(-2.0f, 0.5f);  // Vértice inferior direito
        glVertex2f(-2.0f, 0.3f);   // Vértice superior direito
        glVertex2f(-0.3f, -0.2f);  // Vértice inferior direito
    glEnd();
    
    //parte de cima carro
    glColor3f(0.1f, 0.1f, 0.2f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); // Começa a desenhar um quadrilátero
        glVertex2f(-0.3f, 0.55f); // Vértice inferior esquerdo
        glVertex2f(-1.5f, 0.8f);  // Vértice inferior direito
        glVertex2f(-1.65f, 0.4f);   // Vértice superior direito
        glVertex2f(-0.5f, 0.1f);  // Vértice superior esquerdo
    glEnd();
    //lanterna
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); // Começa a desenhar um quadrilátero
        glVertex2f(-0.2f, -0.1f); // Vértice inferior esquerdo
        glVertex2f(-0.2f, 0.05f);  // Vértice inferior direito
        glVertex2f(-0.05f, 0.05f);   // Vértice superior direito
        glVertex2f(-0.2f, -0.1f);  // Vértice inferior direito
    glEnd();
    
    
    //poeira
    glColor3f(0.4, 0.3, 0.0); // Cor verde claro
    glPushMatrix();
    glTranslatef(-57.0f/*lado e outro*/, 1.4/*cima baixo*/, -150.0f/*tamanho*/);
    glutSolidSphere(1.0, 50, 50);     
    glPopMatrix();
    glColor3f(0.4, 0.3, 0.0); // Cor verde claro
    glPushMatrix();
    glTranslatef(-58.0f/*lado e outro*/, 5.0/*cima baixo*/, -150.0f/*tamanho*/);
    glutSolidSphere(1.0, 50, 50);     
    glPopMatrix();
    glColor3f(0.4, 0.3, 0.0); // Cor verde claro
    glPushMatrix();
    glTranslatef(-63.0f/*lado e outro*/, 3.8/*cima baixo*/, -150.0f/*tamanho*/);
    glutSolidSphere(1.0, 50, 50);     
    glPopMatrix();
    
    //roda 1
    glColor3f(0.1f, 0.1f, 0.2f); // Cor verde claro
    glPushMatrix();
    glTranslatef(-18.0f/*lado e outro*/, 1/*cima baixo*/, -50.0f/*tamanho*/);
    glutSolidSphere(1.0, 50, 50);     
    glPopMatrix();
    // roda2
    glColor3f(0.1f, 0.1f, 0.2f); // Cor verde claro
    glPushMatrix();
    glTranslatef(-8.0f/*lado e outro*/, -2.0/*cima baixo*/, -50.0f/*tamanho*/);
    glutSolidSphere(1.0, 50, 50);     
    glPopMatrix();
    
    //predio
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(1.6f, 1.1f); // Vértice inferior esquerdo
        glVertex2f(1.6f, -0.5f);  // Vértice inferior direito
        glVertex2f(2.4f, -0.5f);   // Vértice superior direito
        glVertex2f(2.4f, 1.1f);  // Vértice inferior direito
    glEnd();
    
    //corpo aviao
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(teste2+0.5f, 1.5f); // Vértice inferior esquerdo
        glVertex2f(teste2+0.5f, 1.8f);  // Vértice inferior direito
        glVertex2f(teste2+1.1f, 1.8f);   // Vértice superior direito
        glVertex2f(teste2+1.1f, 1.5f);  // Vértice inferior direito
    glEnd();
    
    //bico aviao
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(teste2+0.5f, 1.5f); // Vértice inferior esquerdo
        glVertex2f(teste2+0.5f, 1.8f);  // Vértice inferior direito
        glVertex2f(teste2+0.5f, 1.8f);   // Vértice superior direito
        glVertex2f(teste2+0.2f, 1.5f);  // Vértice inferior direito
    glEnd();
    
    //rabo aviao
    glColor3f(0.1f, 0.1f, 0.2f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(teste2+1.1f, 1.5f); // Vértice inferior esquerdo
        glVertex2f(teste2+1.1f, 1.68f);  // Vértice inferior direito
        glVertex2f(teste2+1.2f, 1.68f);   // Vértice superior direito
        glVertex2f(teste2+1.2f, 1.5f);  // Vértice inferior direito
    glEnd();
    
    //estabilizador vertical aviao
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(teste2+0.95f, 1.8f); // Vértice inferior esquerdo
        glVertex2f(teste2+0.95f, 1.8f);  // Vértice inferior direito
        glVertex2f(teste2+1.1f, 1.8f);   // Vértice superior direito
        glVertex2f(teste2+1.1f, 2.0f);  // Vértice inferior direito
    glEnd();
    
    //asa aviao
    glColor3f(0.1f, 0.1f, 0.2f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(teste2+0.4f, 1.7f); // Vértice inferior esquerdo
        glVertex2f(teste2+0.6f, 1.7f);  // Vértice inferior direito
        glVertex2f(teste2+1.1f, 1.3f);   // Vértice superior direito
        glVertex2f(teste2+0.9f, 1.2f);  // Vértice inferior direito
    glEnd();
    
    //tronco arvre
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(1.6f, 1.1f); // Vértice inferior esquerdo
        glVertex2f(1.6f, -0.5f);  // Vértice inferior direito
        glVertex2f(2.4f, -0.5f);   // Vértice superior direito
        glVertex2f(2.4f, 1.1f);  // Vértice inferior direito
    glEnd();
    
    
    //tronco
    glColor3f(0.5f, 0.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(1.1f, 0.5f); // Vértice inferior esquerdo
        glVertex2f(1.1f, -0.5f);  // Vértice inferior direito
        glVertex2f(1.3f, -0.5f);   // Vértice superior direito
        glVertex2f(1.3f, 0.5f);  // Vértice inferior direito
    glEnd();
    
    //folhas
    glColor3f(0.0f, 1.0f, 0.0f); // Define a cor do retângulo (vermelho)
    //glTranslatef(-4.0f, 1.0f, -5.0f);
    glBegin(GL_QUADS); //Começa a desenhar um quadrilátero
        glVertex2f(1.4f, 1.0f); // Vértice inferior esquerdo
        glVertex2f(1.4f, 0.5f);  // Vértice inferior direito
        glVertex2f(0.9f, 0.5f);   // Vértice superior direito
        glVertex2f(0.9f, 1.0f);  // Vértice inferior direito
    glEnd();
    
    
    
    //galeao
    glColor3f(1.0, 1.0, 1.0); // Define a cor do texto (branco)
    desenharTextoBitmap(1.5f, 1.12f, "GALEAO"); // Desenha o texto

    glutSwapBuffers(); // Troca os buffers
}

void idle() {
    rotationAngle += 0.5f;
    teste2-= 0.5f;
    Sleep(100);
    if (rotationAngle > 360.0f) {
        rotationAngle -= 360.0f;
    }
    if(teste2<-3.0f){
        teste2 += 5.0f;                 
    }
    
    glutPostRedisplay();
}

void teclaPressionada(unsigned char tecla, int x, int y) {
    switch (tecla) {
        case 27:
            exit(0); // Saída com ESC
        case 'w':
             glClearColor(0.05f, 0.05f, 0.1f, 1.0f);
            teste++;
            break;
        case 's':
             glClearColor(0.53f, 0.81f, 0.92f, 1.0f);
            teste--;
            break; 
        case 'd':
            teste2++;
               
            break;
        case 'a':
            teste2--;
            break;
        case 'x':
             teste3++;
             break;
        case 'z':
             teste3--;
             break;
    }
    
    
    glutPostRedisplay();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 300);
    glutInitWindowPosition(500, 250);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("Janela do GLUT");

    glutDisplayFunc(display);
    glutIdleFunc(idle);
    glutKeyboardFunc(teclaPressionada);
    inicializar();
    glutMainLoop();
    
    return 0;
}
