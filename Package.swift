// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "shared",
    platforms: [.iOS(.v13)],
    products: [
        .library(name: "shared",targets: ["shared"]),
        .library(name: "dependency",targets: ["dependency"]),
    ],
    targets: [
        .binaryTarget(name: "shared", path: "./shared.xcframework"),
        .binaryTarget(name: "dependency", path: "./dependency/dependency.xcframework"),
    ]
)

