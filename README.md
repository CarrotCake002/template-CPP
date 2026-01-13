# 🚀 C++ Project Template

A ready-to-use **C++ project template** designed to help you skip boilerplate setup and jump straight into development.

This template provides a solid, modern base for most C++ projects, whether personal, academic, or experimental.

---

## ✨ What’s included

### 🛠 Build system
- **CMake-based compilation**
  - Standard build for running the project
  - Separate configuration for unit testing

### 📁 Project structure
- Basic `main` and `usage` files to start coding immediately
- Clean, extensible layout you can adapt to your needs
- A **generic `.gitignore`** suitable for most C++ projects and CI environments

### 🧪 Testing & CI
- **Google Test** integration for unit testing (`test/` directory)
- **GitHub Actions workflow** that automatically:
  1. Builds the project
  2. Runs the executable
  3. Executes unit tests
  4. Generates a coverage report
  5. Publishes an **HTML coverage report** to the `gh-pages` branch for quick visual inspection

---

## 📊 Code coverage
- Coverage is generated using `gcov` + `lcov`
- An easy-to-read **HTML report** is available via GitHub Pages
- Helps quickly identify untested code paths and files

---

## 🌐 Accessing the coverage report (GitHub Pages)

Once the CI workflow runs successfully on the main branch, the coverage report is published automatically to **GitHub Pages**.

### How to access it:
1. Go to your repository on GitHub
2. Navigate to **Settings → Pages**
3. Ensure the source branch is set to **`gh-pages`**
4. Open the provided URL, usually in the form:

```https://<username>.github.io/<repository-name>/```

This page displays an interactive HTML report showing **coverage per file and per line**, making it easy to see what is not being tested.

> 💡 The `gh-pages` branch is fully managed by CI — you never need to modify it manually.

---

## 🎯 Purpose

This template exists to **save you time**.

Instead of spending hours setting up:
- CMake
- Tests
- CI
- Coverage
- GitHub Pages

You can start **implementing your ideas immediately** and iterate from a reliable foundation.

---

## 🤝 Contributing & feedback

Feel free to:
- Adapt this template to your own workflow
- Suggest improvements
- Ask questions or report issues

📬 Don’t hesitate to reach out if you have ideas, feedback, or need help customizing it.
