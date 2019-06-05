/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package fde;

/**
 *
 * @author CC47938751812
 */
public class Aluno {
    private String course;
    private String name;
    private int reg;
    private int grade;

    public Aluno(String course, String name, int reg, int grade) {
        this.course = course;
        this.name = name;
        this.reg = reg;
        this.grade = grade;
    }

    public String getCourse() {
        return course;
    }

    public void setCourse(String course) {
        this.course = course;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getReg() {
        return reg;
    }

    public void setReg(int reg) {
        this.reg = reg;
    }

    public int getGrade() {
        return grade;
    }

    public void setGrade(int grade) {
        this.grade = grade;
    }
}
